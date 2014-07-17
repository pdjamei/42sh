/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 16:42:13 by pdjamei           #+#    #+#             */
/*   Updated: 2014/03/28 16:13:06 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

int		ft_strstrlen(char **s)
{
	int	i;

	i = 0;
	if (s && *s)
	{
		while (s[i] != NULL)
			i++;
	}
	return (i);
}

int		ft_found(char *s, t_gen *env)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	while (env->env[i] != NULL && (ft_strncmp(s, env->env[i], len) != 0
				|| env->env[i][len] != '='))
		i++;
	if (ft_strncmp(s, env->env[i], len) == 0)
		return (i);
	return (0);
}

void	ft_freetmpenv(t_gen *tmpenv)
{
	int	j;

	j = 0;
	if (tmpenv)
	{
		if (tmpenv->env)
		{
			while (tmpenv->env[j])
				free(tmpenv->env[j++]);
			free(tmpenv->env);
		}
	}
	free(tmpenv);
	tmpenv = NULL;
}

int		verif_cd(t_gen *gen)
{
	int	i;

	gen = ft_setenv("HOME", "/", 0, gen);
	gen = ft_setenv("PWD", "/", 0, gen);
	gen = ft_setenv("OLDPWD", "/", 0, gen);
	if (ft_strcmp(gen->env[ft_found("PWD", gen)], "PWD=/"))
			i = chdir("/");
	return (i);
}
