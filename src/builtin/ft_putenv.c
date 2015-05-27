/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdjamei <pdjamei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/22 20:18:21 by pdjamei           #+#    #+#             */
/*   Updated: 2015/01/09 15:08:30 by pdjamei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"
#include "struct.h"

t_gen			*ft_putenv(const char *n, const char *v, t_gen *env)
{
	return (ft_setenv(n, v, 1, env));
}
