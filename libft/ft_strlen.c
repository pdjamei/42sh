/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 17:22:20 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 17:22:23 by mcassagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(const char *s)
{
	const char	*str;

	if (s == NULL)
		return (0);
	str = s;
	while (*str)
		str++;
	return (str - s);
}
