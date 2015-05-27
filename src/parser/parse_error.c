/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:14:27 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:14:33 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"
#include <unistd.h>

t_bool		parse_error(char *str)
{
	if (!write(STDOUT_FILENO, "Parse error near '", 18))
		return (FALSE);
	ft_putstr(str);
	if (!write(STDOUT_FILENO, "'.\n", 3))
		return (FALSE);
	return (FALSE);
}
