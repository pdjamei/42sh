/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:04:38 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:04:42 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	if (s)
	{
		str = s;
		while (n-- > 0)
		{
			if (*str == (unsigned char)c)
				return ((void *)str);
			str++;
		}
	}
	return (NULL);
}
