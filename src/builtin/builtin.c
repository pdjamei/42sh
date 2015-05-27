/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/28 18:02:48 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:08:34 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

t_builtin	**init_listbuiltin5(t_builtin **l)
{
	l[7]->help = ft_strcpy(l[7]->help, "USAGE :\nhelp [name] \n\nDESCRIPTION ");
	l[7]->name = ft_strdup("help");
	l[7]->help = ft_strcat(l[7]->help, ":\nhelp shows informations about buil");
	l[7]->help = ft_strcat(l[7]->help, "tin commands.\n");
	if (!(l[8] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	l[8]->name = NULL;
	l[8]->help = NULL;
	return (l);
}

t_builtin	**init_listbuiltin4(t_builtin **l)
{
	if (!(l[5]->help = (char *)malloc(sizeof(char) * 254)))
		return (NULL);
	l[5]->help = ft_strcpy(l[5]->help, "USAGE :\necho [-n] [string ...] \n\nD");
	l[5]->help = ft_strcat(l[5]->help, "ESCRIPTION :\necho writes any specifi");
	l[5]->help = ft_strcat(l[5]->help, "ed operands, separated by single blan");
	l[5]->help = ft_strcat(l[5]->help, "k (\" \") characters and followed by ");
	l[5]->help = ft_strcat(l[5]->help, "a newline (\"\n\") character, to the ");
	l[5]->help = ft_strcat(l[5]->help, "standard output.\nThe \"-n\" option w");
	l[5]->help = ft_strcat(l[5]->help, "ill remove the trailing newline chara");
	l[5]->help = ft_strcat(l[5]->help, "cter.\n");
	if (!(l[6] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	l[6]->name = ft_strdup("cd");
	if (!(l[6]->help = (char *)malloc(sizeof(char) * 175)))
		return (NULL);
	l[6]->help = ft_strcpy(l[6]->help, "USAGE :\ncd [path] \n\nDESCRIPTION :");
	l[6]->help = ft_strcat(l[6]->help, "\ncd move the current working directo");
	l[6]->help = ft_strcat(l[6]->help, "ry to the specified path. If path is ");
	l[6]->help = ft_strcat(l[6]->help, "not specified, the current working di");
	l[6]->help = ft_strcat(l[6]->help, "rectory will be moved to home.\n");
	if (!(l[7] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	if (!(l[7]->help = (char *)malloc(sizeof(char) * 85)))
		return (NULL);
	return (init_listbuiltin5(l));
}

t_builtin	**init_listbuiltin3(t_builtin **l)
{
	l[2]->help = ft_strcat(l[2]->help, "ite is zero, the variable is not rese");
	l[2]->help = ft_strcat(l[2]->help, "t, otherwise it is reset to the given");
	l[2]->help = ft_strcat(l[2]->help, " value.\n");
	if (!(l[3] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	if (!(l[3]->help = (char *)malloc(sizeof(char) * 143)))
		return (NULL);
	l[3]->name = ft_strdup("putenv");
	l[3]->help = ft_strcpy(l[3]->help, "USAGE :\nputenv name value\n\nDESCRIP");
	l[3]->help = ft_strcat(l[3]->help, "ment of the form \"name=value\" and i");
	l[3]->help = ft_strcat(l[3]->help, "TION :\nputenv function takes an argu");
	l[3]->help = ft_strcat(l[3]->help, "s equivalent to: setenv name value 1");
	l[3]->help = ft_strcat(l[3]->help, "\n");
	if (!(l[4] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	l[4]->name = ft_strdup("pwd");
	if (!(l[4]->help = (char *)malloc(sizeof(char) * 69)))
		return (NULL);
	l[4]->help = ft_strcpy(l[4]->help, "USAGE :\npwd\n\nDESCRIPTION :\npwd pr");
	l[4]->help = ft_strcat(l[4]->help, "int the current working directory.\n");
	if (!(l[5] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	l[5]->name = ft_strdup("echo");
	return (init_listbuiltin4(l));
}

t_builtin	**init_listbuiltin2(t_builtin **l)
{
	if (!(l[1] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	l[1]->name = ft_strdup("unsetenv");
	if (!(l[1]->help = (char *)malloc(sizeof(char) * 214)))
		return (NULL);
	l[1]->help = ft_strcpy(l[1]->help, "USAGE :\nunsetenv name\n\nDESCRIPTION");
	l[1]->help = ft_strcat(l[1]->help, " :\nunsetenv deletes all instances of");
	l[1]->help = ft_strcat(l[1]->help, " the variable name pointer to by name");
	l[1]->help = ft_strcat(l[1]->help, " from the l. Note that only the varia");
	l[1]->help = ft_strcat(l[1]->help, "ble name (e.g., \"NAME\") should be g");
	l[1]->help = ft_strcat(l[1]->help, "iven; \"NAME=value\" will not work.\n");
	if (!(l[2] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	l[2]->name = ft_strdup("setenv");
	if (!(l[2]->help = (char *)malloc(sizeof(char) * 374)))
		return (NULL);
	l[2]->help = ft_strcpy(l[2]->help, "USAGE :\nsetenv name value overwrite");
	l[2]->help = ft_strcat(l[2]->help, "\n\nDESCRIPTION :\nsetenv inserts or ");
	l[2]->help = ft_strcat(l[2]->help, "resets the environment variable name ");
	l[2]->help = ft_strcat(l[2]->help, "in the current environment l.  If the");
	l[2]->help = ft_strcat(l[2]->help, " variable name does not exist in the ");
	l[2]->help = ft_strcat(l[2]->help, "l, it is inserted with the given valu");
	l[2]->help = ft_strcat(l[2]->help, "e. If the variable does exist, the ar");
	l[2]->help = ft_strcat(l[2]->help, "gument overwrite is tested; if overwr");
	return (init_listbuiltin3(l));
}

t_builtin	**init_listbuiltin(void)
{
	t_builtin	**l;

	if (!(l = (t_builtin **)malloc(sizeof(t_builtin *) * 9)))
		return (NULL);
	if (!(l[0] = (t_builtin *)malloc(sizeof(t_builtin))))
		return (NULL);
	l[0]->name = ft_strdup("env");
	if (!(l[0]->help = (char *)malloc(sizeof(char) * 471)))
		return (NULL);
	l[0]->help = ft_strcpy(l[0]->help, "USAGE :\nenv [-i] [name=value ...] [u");
	l[0]->help = ft_strcat(l[0]->help, "tility [argument ...]]\n\nDESCRIPTION");
	l[0]->help = ft_strcat(l[0]->help, " :\nenv executes utility after modify");
	l[0]->help = ft_strcat(l[0]->help, "ing the environment as specified on t");
	l[0]->help = ft_strcat(l[0]->help, "he command line. The option name=valu");
	l[0]->help = ft_strcat(l[0]->help, "e specifies an environmental variable");
	l[0]->help = ft_strcat(l[0]->help, ", name, with a value of value of valu");
	l[0]->help = ft_strcat(l[0]->help, "e. The option '-i' causes env to comp");
	l[0]->help = ft_strcat(l[0]->help, "letly ignore the environment it inher");
	l[0]->help = ft_strcat(l[0]->help, "its.\nIf no utility is specified, env");
	l[0]->help = ft_strcat(l[0]->help, " prints out the names and values of t");
	l[0]->help = ft_strcat(l[0]->help, "he variables in the environment, with");
	l[0]->help = ft_strcat(l[0]->help, " one name=value pair per line.\n");
	return (init_listbuiltin2(l));
}
