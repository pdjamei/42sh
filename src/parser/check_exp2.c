/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exp2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:11:10 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:11:17 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

t_bool			check_background(t_token *token_lst)
{
	if (token_lst->type == bg)
	{
		if (token_lst->next)
			return (check_exp(token_lst->next));
		return (TRUE);
	}
	return (parse_error(token_lst->str));
}

t_bool			check_logical(t_token *token_lst)
{
	if (token_lst->type == log_and \
			|| token_lst->type == log_or)
	{
		if (token_lst->next)
			return (check_exp(token_lst->next));
		else
			return (parse_error(token_lst->str));
	}
	return (parse_error(token_lst->str));
}
