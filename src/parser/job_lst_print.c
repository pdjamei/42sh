/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   job_lst_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:13:42 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:13:47 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

void			job_lst_print(t_job *job_lst)
{
	t_job		*curr;
	t_token		*token;
	int			i;

	curr = job_lst;
	i = 1;
	while (curr != NULL)
	{
		ft_putstr("Job ");
		ft_putnbr(i++);
		ft_putstr(" : [");
		token = curr->token_lst;
		while (token)
		{
			ft_putstr(token->str);
			token = token->next;
		}
		ft_putstr("]\n");
		process_lst_print(curr->first_process);
		curr = curr->next;
	}
}
