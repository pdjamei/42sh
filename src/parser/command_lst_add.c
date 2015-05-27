/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_lst_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:11:25 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:11:30 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

t_command		*command_lst_add(t_command *command_lst, t_token *token, \
										char background)
{
	t_command	*curr;
	t_command	*new;

	if (!(new = create_command(token)))
		return (NULL);
	new->background = background;
	if (!command_lst)
		return (new);
	curr = command_lst;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new;
	new->prev = curr;
	return (command_lst);
}
