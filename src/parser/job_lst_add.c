/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   job_lst_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:13:25 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:13:30 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

t_job				*job_lst_add(t_job *lst, t_token *token_lst, \
									char need_success)
{
	t_job			*new_job;
	t_job			*current;

	if (!(new_job = create_job(token_lst, need_success)))
		return (NULL);
	if (!lst)
		return (new_job);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new_job;
	new_job->prev = current;
	return (lst);
}
