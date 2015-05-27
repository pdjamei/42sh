/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:53:58 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 14:54:04 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char			is_trim(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

static unsigned int	get_new_size(const char *s)
{
	unsigned int	size;

	size = 0;
	while (is_trim(*s))
		s++;
	while (*s++)
		size++;
	s--;
	while (is_trim(*s--))
		size--;
	return (size);
}

char				*ft_strtrim(char const *s)
{
	char			*ret;
	unsigned int	size;
	unsigned int	i;

	size = get_new_size(s);
	if (!(ret = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(ret, 0, size + 1);
	while (is_trim(*s))
		s++;
	i = 0;
	while (i < size)
		ret[i++] = *s++;
	ret[i] = '\0';
	return (ret);
}
