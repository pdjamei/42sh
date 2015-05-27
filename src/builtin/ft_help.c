/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:08:01 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:08:05 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"
#include "libft.h"
#include "parser.h"

void		ft_help(t_process *p, t_builtin **builtin)
{
	int		i;

	i = 0;
	if (builtin)
	{
		if (!(ft_strcmp(p->av[0], "help") && p->av[1] != NULL))
		{
			while (builtin[i] && builtin[i]->name != NULL)
			{
				if (p->av[1] && !(ft_strcmp(builtin[i]->name, p->av[1])))
				{
					ft_dprintf(p->FD_OUT, "NAME : %s\n\n%s\n",
							builtin[i]->name, builtin[i]->help);
					return ;
				}
				i++;
			}
		}
		i = 0;
		ft_dprintf(p->FD_OUT,
				"help is to be used with one of the following arguments :\n");
		while (builtin[i]->name != NULL)
			ft_dprintf(p->FD_OUT, "   %s\n", builtin[i++]->name);
	}
}
