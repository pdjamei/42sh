/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 17:23:31 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 14:51:56 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*ret;

	if ((ret = (char *)malloc((size + 1) * sizeof(char))) == NULL)
		return (NULL);
	++size;
	while (size-- > 0)
		ret[size] = '\0';
	return (ret);
}
