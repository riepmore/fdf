/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 23:30:27 by pmore             #+#    #+#             */
/*   Updated: 2014/10/12 15:51:53 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		rotate(t_point *a, t_point *b, t_map *map)
{
	a->x = (a->x * cos(map->rot)) - (a->y * sin(map->rot));
	a->y = (a->x * cos(map->rot)) + (a->y * sin(map->rot));
	b->x = (b->x * cos(map->rot)) - (b->y * sin(map->rot));
	b->y = (b->x * cos(map->rot)) + (b->y * sin(map->rot));
}

void		mod_line(t_map *map, int x, int y)
{
	t_point a;
	t_point b;

	a.x = (x * map->zoom) - map->map[y][x];
	a.y = (y * map->zoom) - map->map[y][x];
	map->c1 = map->map[y][x];
	if ((x + 1) < map->scol)
	{
		b.x = ((x + 1) * map->zoom) - map->map[y][x + 1];
		b.y = (y * map->zoom) - map->map[y][x + 1];
		rotate(&a, &b, map);
		map->c2 = map->map[y][x + 1];
		aff_line(map, a, b);
		a.x = (x * map->zoom) - map->map[y][x];
		a.y = (y * map->zoom) - map->map[y][x];
	}
	if ((y + 1) < map->slin)
	{
		b.x = (x * map->zoom) - map->map[y + 1][x];
		b.y = ((y + 1) * map->zoom) - map->map[y + 1][x];
		rotate(&a, &b, map);
		map->c2 = map->map[y + 1][x];
		aff_line(map, a, b);
	}
}

void		aff_map(t_map *map)
{
	int			y;
	int			x;

	y = -1;
	while (++y < map->slin)
	{
		x = -1;
		while (++x < map->scol)
			mod_line(map, x, y);
	}
}

int			expose_hook(t_map *map)
{
	aff_map(map);
	return (0);
}

void		ft_fdf(t_map *map)
{
	map->mlx = mlx_init();
	map->win = mlx_new_window(map->mlx, 1080, 720, "fdf");
	mlx_expose_hook(map->win, expose_hook, map);
	mlx_hook(map->win, 2, 1, key_hook, map);
	mlx_loop(map->mlx);
}
