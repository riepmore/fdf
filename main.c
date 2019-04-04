/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 23:26:06 by pmore             #+#    #+#             */
/*   Updated: 2014/10/11 23:10:40 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			main(int argc, char **argv)
{
	t_map map;

	if (argc != 2)
	{
		ft_putendl("Error: number of argument -> 1");
		return (1);
	}
	map = take_map(argv[1]);
	map.color = 0xFFFFFF;
	map.flag = 0;
	map.zoom = 30;
	map.sizey = 50;
	map.color = 0xFFFFFF;
	map.sizex = 275;
	map.rot = 45;
	ft_fdf(&map);
	return (0);
}
