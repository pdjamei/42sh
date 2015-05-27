/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token_lst_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:15:46 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:15:52 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

t_token			*token_lst_print(t_token *token_list)
{
	t_token		*ret;

	ret = token_list;
	if (token_list)
	{
		while (token_list)
		{
			ft_putstr("[");
			ft_putstr(token_list->str);
			ft_putstr("] [");
			ft_putnbr(token_list->type);
			ft_putstr("]");
			if (token_list->next)
				ft_putstr(" -> ");
			token_list = token_list->next;
		}
		ft_putchar('\n');
	}
	return (ret);
}
