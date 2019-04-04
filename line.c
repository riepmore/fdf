/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/10 22:08:07 by pierremore        #+#    #+#             */
/*   Updated: 2014/10/12 15:56:55 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			increment_color(int color, t_map *map, int i)
{
	if (map->c1 == 0 && map->c2 != 0)
		color -= 50 * i;
	else if (map->c1 != 0 && map->c2 == 0)
	{
		color -= 50 * map->c1;
		color += 50 * i;
	}
	else if (map->c2 == map->c1)
		color = color - (map->c1 * 50);
	if (color < 0)
		color = WH;
	if (color > WH)
		color = WH;
	return (color);
}

void		dx_sup_dy(t_map *m, t_line l, int c)
{
	int		putx;
	int		puty;

	l.cumul = l.dx / 2;
	l.i = 0;
	while (++l.i <= l.dx)
	{
		c = increment_color(c, m, l.i);
		l.tx += l.xinc;
		l.cumul += l.dy;
		if (l.cumul >= l.dx)
		{
			l.cumul -= l.dx;
			l.ty += l.yinc;
		}
		putx = l.tx + m->sizex;
		puty = l.ty + m->sizey;
		if (m->flag == 0)
			mlx_pixel_put(m->mlx, m->win, putx, puty, c);
		else
			mlx_pixel_put(m->mlx, m->win, putx, puty, BL);
	}
}

void		dy_sup_dx(t_map *m, t_line l, int c)
{
	int		putx;
	int		puty;

	l.cumul = l.dy / 2;
	l.i = 0;
	while (++l.i <= l.dy)
	{
		c = increment_color(c, m, l.i);
		l.ty += l.yinc;
		l.cumul += l.dx;
		if (l.cumul >= l.dy)
		{
			l.cumul -= l.dy;
			l.tx += l.xinc;
		}
		putx = l.tx + m->sizex;
		puty = l.ty + m->sizey;
		if (m->flag == 0)
			mlx_pixel_put(m->mlx, m->win, putx, puty, c);
		else
			mlx_pixel_put(m->mlx, m->win, putx, puty, BL);
	}
}

void		aff_line(t_map *m, t_point a, t_point b)
{
	t_line	l;
	int		col;
	int		putx;
	int		puty;

	l.tx = a.x;
	l.ty = a.y;
	l.dx = b.x - a.x;
	l.dy = b.y - a.y;
	l.xinc = (l.dx > 0) ? 1 : -1;
	l.yinc = (l.dy > 0) ? 1 : -1;
	col = m->color;
	l.dx = abs(l.dx);
	l.dy = abs(l.dy);
	putx = l.tx + m->sizex;
	puty = l.ty + m->sizey;
	if (m->flag == 0)
		mlx_pixel_put(m->mlx, m->win, putx, puty, col);
	else
		mlx_pixel_put(m->mlx, m->win, putx, puty, BL);
	if (l.dx > l.dy)
		dx_sup_dy(m, l, col);
	else
		dy_sup_dx(m, l, col);
}
