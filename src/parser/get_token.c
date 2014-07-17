/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_token.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 16:47:37 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 21:27:27 by mcassagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"
#include <stdlib.h>

#define	TYPE token->type

static void		get_op_str(char **str, t_sym type, char *token_str)
{
	int			i;

	i = 0;
	if (type == redir_in || type == redir_out
			|| type == colon || type == pipes || type == bg)
		(token_str)[i++] = *(*str)++;
	else if (type == append || type == log_and || type == log_or
			|| type == redir_err)
	{
		(token_str)[i++] = *(*str)++;
		(token_str)[i++] = *(*str)++;
	}
	token_str[i] = '\0';
}

static char		check_quote(char **str)
{
	char		quote;

	if (**str == '\"' && (*str))
		quote = '\"';
	else if (**str == '\'' && (*str))
		quote = '\'';
	else
		quote = 0;
	return (quote);
}

static char		get_word_str(char **str, char *token_str)
{
	int			i;
	char		quote;

	i = 0;
	quote = check_quote(str);
	while (**str)
	{
		**str = (**str == 0x0a) ? ' ' : **str;
		token_str[i++] = *(*str)++;
		if (quote && i != 1 && token_str[i - 1] == quote)
			break ;
		else if (!quote && (!is_ok_char(**str) || is_op_char(**str)))
			break ;
		*str = (**str == '\\') ? *str + 1 : (*str);
	}
	token_str[i] = '\0';
	if (quote && token_str[0] == token_str[i - 1])
		return (1);
	else if (quote)
		return (0);
	else
		return (1);
}

t_token			*get_token(char **str)
{
	char		*token_str;
	t_token		*token;
	int			i;

	token_str = (char *)malloc(sizeof(char) * 1025);
	token = create_token();
	if (!token || !token_str || (i = 0))
		return (NULL);
	ft_memset(token_str, 0, 1025);
	TYPE = get_token_type(*str);
	if (TYPE == unknown)
		return (NULL);
	else if (TYPE != word)
		get_op_str(str, token->type, token_str);
	else if (get_word_str(str, token_str) == 0)
		return (NULL);
	token->str = ft_strdup(token_str);
	if (token_str)
		ft_strdel(&token_str);
	return (token);
}

t_token			*get_token_lst(char *str)
{
	t_token		*token_list;
	t_token		*new_token;

	token_list = NULL;
	while (*str != '\0')
	{
		new_token = NULL;
		if (!(new_token = get_token(&str)))
		{
			token_lst_free(&token_list);
			ft_putstr("Parse error near \' ");
			ft_putchar(*(str - 1));
			ft_putstr(" \'.\n");
			return (NULL);
		}
		token_list = token_lst_add(new_token, token_list);
		while (*str == ' ' || *str == '\t')
			str++;
	}
	return (token_list);
}
