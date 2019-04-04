/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/11 16:57:40 by pierremore        #+#    #+#             */
/*   Updated: 2014/10/12 15:46:31 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		supp_mod(t_map *map)
{
	map->flag = 1;
	expose_hook(map);
	map->flag = 0;
}

void		key_exit(t_map *map)
{
	close(map->fd);
	free_int_tab(map->map, map->slin);
	exit(0);
}

int			key_hook(int keycode, t_map *map)
{
	supp_mod(map);
	if (keycode == EXIT)
		key_exit(map);
	else if (keycode == UP)
		map->sizey += 5;
	else if (keycode == DOWN)
		map->sizey -= 5;
	else if (keycode == LEFT)
		map->sizex -= 5;
	else if (keycode == RIGHT)
		map->sizex += 5;
	else if (keycode == ZIN)
		map->zoom += 5;
	else if (keycode == ZOUT)
		map->zoom -= 5;
	else if (keycode == ROTP)
		map->rot += 0.1;
	else if (keycode == ROTM)
		map->rot -= 0.1;
	else if (keycode == COLOR)
		map->color -= 1000;
	expose_hook(map);
	return (0);
}
