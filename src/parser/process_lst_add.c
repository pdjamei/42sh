/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_lst_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:14:57 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:15:02 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

t_process				*process_lst_add(t_process *lst, char *str)
{
	t_process			*new_process;
	t_process			*current;

	if (!(new_process = create_process(str)))
		return (NULL);
	if (!lst)
		return (new_process);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new_process;
	new_process->prev = current;
	return (lst);
}
