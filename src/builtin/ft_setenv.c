/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 11:50:32 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/08 20:48:27 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"
#include "error.h"

t_gen			*ft_unsetenv(const char *n, t_gen *env)
{
	int	i;

	if ((i = ft_found((char *)n, env)) != 0)
	{
		free(env->env[i]);
		while (env->env[i] != '\0')
		{
			env->env[i] = env->env[i + 1];
			i++;
		}
	}
	return (env);
}

int				ft_destroyenv(char **env)
{
	int	i;

	if (env)
	{
		i = 0;
		while (env[i])
			ft_strdel(&env[i]);
		free(env);
	}
	return (1);
}

t_gen			*ft_modifenv(t_gen *env, int i, const char *n, const char *v)
{
	if (!(env->env[i] = (char *)malloc((ft_strlen(n) + ft_strlen(v) + 2)
					* sizeof(char))))
	{
		env->ret = EALLOC;
		return (env);
	}
	env->env[i] = ft_strcpy(env->env[i], n);
	env->env[i] = ft_strcat(env->env[i], "=");
	env->env[i] = ft_strcat(env->env[i], v);
	return (env);
}

char			**create_blank_env(t_gen *gen, int i)
{
	char		**new_env;
	int			size;

	size = ft_strstrlen(gen->env);
	if (!(new_env = (char **)malloc(sizeof(char *) \
					* (size + i + 1))) && gen->ret == EALLOC)
		return (NULL);
	return (new_env);
}

t_gen			*ft_setenv(const char *n, const char *v, int ow, t_gen *gen)
{
	int			i;
	char		**n_e;

	i = -1;
	while (gen->env && gen->env[++i])
		if (((int)ft_strlen(n) == ft_strchr(gen->env[i], '=') - gen->env[i]) \
				&& !ft_strncmp(n, gen->env[i], ft_strlen(n)))
		{
			if (ow == 1)
			{
				free(gen->env[i]);
				gen->env[i] = ft_joinfree(ft_strjoin(n, "="), (char *)v, 1);
			}
			return (gen);
		}
	if (!(n_e = create_blank_env(gen, 1)))
		return (NULL);
	i = (gen->env) ? -1 : 0;
	while (gen->env && gen->env[++i])
		n_e[i] = ft_strdup(gen->env[i]);
	n_e[i] = ft_joinfree(ft_strjoin(n, "="), (char *)v, 1);
	n_e[i + 1] = NULL;
	ft_destroyenv(gen->env);
	gen->env = n_e;
	return (gen);
}
