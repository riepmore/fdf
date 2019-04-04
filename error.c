/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/11 17:32:34 by pierremore        #+#    #+#             */
/*   Updated: 2014/10/11 17:38:27 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		error_len(void)
{
	ft_putendl("Error: Lines not equals");
	exit(1);
}

void		error_char(void)
{
	ft_putendl("Error: not only numbers");
	exit(2);
}
