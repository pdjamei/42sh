/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:04:20 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:04:32 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*s;

	s = malloc(size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
