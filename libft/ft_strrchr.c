/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 21:08:32 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 14:55:24 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		save;

	i = 0;
	save = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			save = i;
		}
		i++;
	}
	if (c == 0)
	{
		return ((char *)&s[i]);
	}
	else if (save == -1)
	{
		return (NULL);
	}
	return ((char *)&s[save]);
}
