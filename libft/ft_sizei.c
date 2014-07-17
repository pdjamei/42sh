/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizei.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 17:21:07 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 17:21:11 by mcassagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_sizei(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '-' || s[0] == '+' || s[0] == ' ' || s[0] == '#')
		i++;
	while (ft_isdigit(s[i]) > 0)
		i++;
	return (i);
}