/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 17:19:55 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 17:19:57 by mcassagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (b != 0)
	{
		while (i < len)
		{
			*((char *)b + i) = c;
			i++;
		}
	}
	return (b);
}
