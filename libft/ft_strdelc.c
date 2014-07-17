/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 17:21:46 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 17:21:48 by mcassagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdelc(const char *s, char c)
{
	int		i;
	int		j;
	char	*ret;

	j = 0;
	i = 0;
	ret = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ret)
	{
		while (s[j])
		{
			if (s[j] != c)
				ret[i++] = s[j++];
			else if (s[j - 1] == '\\')
				ret[i - 1] = s[j++];
			else
				j++;
		}
		ret[i] = '\0';
		return (ret);
	}
	else
		return ((char *)s);
}
