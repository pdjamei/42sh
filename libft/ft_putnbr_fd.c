/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassagn <mcassagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 17:20:50 by mcassagn          #+#    #+#             */
/*   Updated: 2014/03/27 18:45:35 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define C ft_putchar_fd

int	ft_putnbr_fd(int n, int fd)
{
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n >= 0)
		{
			if (n >= 10)
				return (ft_putnbr_fd(n / 10, fd) + C(n % 10 + '0', fd));
			else
				return (ft_putchar_fd('0' + n, fd));
		}
		else
			return (ft_putchar_fd('-', fd) + ft_putnbr_fd(-n, fd));
	}
	else if (n == INT_MIN)
		return (ft_putstr_fd("-2147483648", fd));
	else
		return (0);
	return (0);
}
