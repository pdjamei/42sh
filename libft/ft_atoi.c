/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:06:34 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:06:46 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		nbr;
	int		sign;

	sign = 1;
	nbr = 0;
	while (str && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	if (str && (*str == '+' || *str == '-'))
		sign = (*(str++) == '-' ? -sign : sign);
	while (str && (*str >= '0' && *str <= '9'))
		nbr = nbr * 10 + ((*(str++) - '0') * sign);
	return (nbr);
}
