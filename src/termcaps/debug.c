/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:16:43 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:16:48 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh.h"

void print_key(char *key)
{
	ft_putstr("touche appuyer : [");
	ft_putnbr((int)key[0]);
	ft_putstr("] [");
	ft_putnbr((int)key[1]);
	ft_putstr("] [");
	ft_putnbr((int)key[2]);
	ft_putstr("] [");
	ft_putnbr((int)key[3]);
	ft_putstr("];\n");
}
