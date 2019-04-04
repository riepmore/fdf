/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/12 15:54:56 by pmore             #+#    #+#             */
/*   Updated: 2014/10/12 15:56:16 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_STRUCT_H
# define FDF_STRUCT_H

typedef struct			s_map
{
	int		fd;
	void	*mlx;
	void	*win;
	int		c1;
	int		c2;
	int		**map;
	int		scol;
	int		slin;
	int		sizey;
	int		sizex;
	int		flag;
	int		zoom;
	int		color;
	double	rot;
}						t_map;

typedef struct			s_point
{
	int		x;
	int		y;
}						t_point;

typedef struct			s_line
{
	int		color;
	int		tx;
	int		ty;
	int		dx;
	int		dy;
	int		xinc;
	int		yinc;
	int		i;
	int		cumul;
}						t_line;

#endif
