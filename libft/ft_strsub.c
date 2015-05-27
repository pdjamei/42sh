/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:54:11 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 14:54:16 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (NULL);
	if ((ret = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ret[i] = s[start + i];
		++i;
	}
	return (ret);
}
