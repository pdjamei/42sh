/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_lst_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:15:39 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:15:43 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "parser.h"
#include <stdlib.h>

void		token_free(t_token **token)
{
	t_token	*to_free;

	to_free = *token;
	ft_strdel(&(to_free->str));
	free(to_free);
	to_free = NULL;
}

void		token_lst_free(t_token **token_lst)
{
	t_token	*curr;
	t_token	*to_free;

	curr = *token_lst;
	while (curr != NULL)
	{
		to_free = curr;
		curr = curr->next;
		token_free(&to_free);
	}
	*token_lst = NULL;
}
