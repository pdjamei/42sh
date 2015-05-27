/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:14:46 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:14:50 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

t_command		*parser(char *str)
{
	t_token		*token_lst;
	t_command	*command_lst;

	command_lst = NULL;
	if ((token_lst = get_token_lst(str)))
	{
		if (check_exp(token_lst))
			command_lst = make_command_lst(token_lst);
		token_lst_free(&token_lst);
	}
	return (command_lst);
}
