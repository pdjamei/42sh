/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:47:57 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 14:48:03 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXEC_H
# define EXEC_H
# include "struct.h"

void		ft_print_env(char **envp);
int			check_access(char *path);
char		*find_path_exec(char *exec, t_gen *envp);
char		*get_var_env(char *var, char **envp);
void		free_split(char ***to_free);
char		*check_and_get_path(char *var, t_gen *envp);

#endif
