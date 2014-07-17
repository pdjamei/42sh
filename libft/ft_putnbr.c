/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 17:20:42 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 17:20:44 by mcassagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n >= 0)
		{
			if (n >= 10)
				return (ft_putnbr(n / 10) + ft_putchar(n % 10 + '0'));
			else
				return (ft_putchar('0' + n));
		}
		else
			return (ft_putchar('-') + ft_putnbr(-n));
	}
	else if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	return (0);
}
