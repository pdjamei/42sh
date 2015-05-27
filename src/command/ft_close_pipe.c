/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_pipe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:09:51 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:09:55 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "parser.h"

void		ft_close_pipe(t_process *p)
{
	if (STDIN_FILENO != p->FD_IN)
		close(p->FD_IN);
	if (STDERR_FILENO != p->FD_ERR)
		close(p->FD_ERR);
	if (STDOUT_FILENO != p->FD_OUT)
		close(p->FD_OUT);
}
