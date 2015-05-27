/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_command_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:13:54 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:14:00 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

t_command			*make_command_lst(t_token *token_lst)
{
	t_command		*command_lst;
	t_token			*curr_tok;
	t_token			*com_token;
	char			exec;

	curr_tok = token_lst;
	command_lst = NULL;
	while (curr_tok != NULL)
	{
		exec = FOREGROUND;
		com_token = NULL;
		while (curr_tok && curr_tok->type != colon && curr_tok->type != bg)
		{
			com_token = token_add(curr_tok->str, curr_tok->type, com_token);
			curr_tok = curr_tok->next;
		}
		if (curr_tok)
		{
			if (curr_tok->type == bg)
				exec = BACKGROUND;
			curr_tok = curr_tok->next;
		}
		command_lst = command_lst_add(command_lst, com_token, exec);
	}
	return (command_lst);
}
