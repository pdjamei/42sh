/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_job.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:12:11 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:12:15 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"
#include <stdlib.h>

t_job			*create_job(t_token *token_lst, char need_success)
{
	t_job		*new_job;

	if (!(new_job = (t_job *)malloc(sizeof(*new_job))))
		return (NULL);
	new_job->token_lst = token_lst;
	new_job->need_success = need_success;
	new_job->next = NULL;
	new_job->prev = NULL;
	new_job->first_process = make_process_lst(new_job->token_lst);
	return (new_job);
}
