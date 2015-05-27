/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_lst_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:15:06 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:15:10 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"
#include <stdlib.h>

static void		av_del(char **av)
{
	int			i;

	i = 0;
	while (av[i])
	{
		ft_strdel(&av[i]);
		i++;
	}
	free(av);
	av = NULL;
}

void			process_lst_free(t_process *process_lst)
{
	t_process	*curr;
	t_process	*to_free;

	curr = process_lst;
	while (curr)
	{
		to_free = curr;
		curr = curr->next;
		av_del(to_free->av);
		to_free->FD_IN = 0;
		to_free->FD_OUT = 0;
		to_free->FD_ERR = 0;
		to_free->next = NULL;
		to_free->prev = NULL;
		free(to_free);
		to_free = NULL;
	}
	process_lst = NULL;
}
