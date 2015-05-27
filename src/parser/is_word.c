/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_word.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:13:12 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:13:17 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"
#include <string.h>

static int		my_strlen(const char *s)
{
	int			i;

	i = 0;
	if (s)
	{
		while (s[i] && s[i] != ' ' && !is_op_char(s[i]))
			i++;
		return (i);
	}
	return (0);
}

t_bool			is_op_char(char c)
{
	if (c == '|' || c == ';' || c == '<' || c == '>' || c == '&')
		return (TRUE);
	return (FALSE);
}

t_bool			is_ok_char(char c)
{
	if ((c > 32 && c < 127) || c == 0x0a)
		return (TRUE);
	return (FALSE);
}

t_sym			is_word(char *str)
{
	int			i;

	i = 0;
	if (str[i] == '\"' || str[i] == '\'')
	{
		i++;
	}
	while (str[i] && is_ok_char(str[i]) && !is_op_char(str[i]))
		i++;
	if (i == my_strlen(str))
		return (word);
	return (unknown);
}
