/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_lst_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:15:17 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:15:21 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "libft.h"

void			process_lst_print(t_process *process)
{
	ft_putstr("process : ");
	while (process)
	{
		ft_putstr(" [");
		ft_putstr(process->av[0]);
		ft_putstr(" IN : ");
		ft_putnbr(process->FD_IN);
		ft_putstr(" OUT : ");
		ft_putnbr(process->FD_OUT);
		ft_putstr(" ERR : ");
		ft_putnbr(process->FD_ERR);
		ft_putstr("] ");
		if (process->next)
			ft_putstr("->");
		process = process->next;
	}
	ft_putchar('\n');
}
