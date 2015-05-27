/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 15:10:09 by pdjamei           #+#    #+#             */
/*   Updated: 2015/03/16 16:27:17 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "parser.h"
#include "exec.h"
#include "struct.h"
#include "error.h"
#include "command.h"

void		launch_process(t_process *p, t_gen *envp)
{
	check_redirection(p, envp);
	if ((envp->path = check_and_get_path(p->av[0], envp)) != NULL)
	{
		execve(envp->path, p->av, envp->env);
		exit(-1);
	}
	else
	{
		error(p, 0);
		exit(-1);
	}
}
