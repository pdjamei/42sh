/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 18:27:32 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 14:51:49 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n && s1[i] == s2[i])
		i++;
	if (i == n || s1[i] == s2[i])
		return (1);
	return (0);
}
