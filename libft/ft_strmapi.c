/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 17:22:39 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 17:23:39 by mcassagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned i, char))
{
	int		i;
	char	*str;

	i = 0;
	if (s && f)
	{
		str = ft_memalloc(ft_strlen((char *)s) + 1);
		if (str)
		{
			while (s[i] != '\0')
			{
				str[i] = f(i, s[i]);
				i++;
			}
			return (str);
		}
	}
	return (NULL);
}
