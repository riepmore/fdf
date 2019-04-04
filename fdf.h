/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmore <pmore@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 23:25:59 by pmore             #+#    #+#             */
/*   Updated: 2014/10/12 15:55:37 by pmore            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <math.h>
# include "libft.h"
# include "fdf_struct.h"

# define UP		65362
# define DOWN	65364
# define RIGHT	65361
# define LEFT	65363
# define EXIT	65307
# define ZIN	109
# define ZOUT	110
# define ROTP	114
# define ROTM	116
# define COLOR	99

# define BL		0x000000
# define WH		0xFFFFFF

void		ft_fdf(t_map *map);
int			key_hook(int keycode, t_map *map);
int			expose_hook(t_map *map);
void		error_len(void);
void		error_char(void);
t_map		take_map(char *path);
void		aff_line(t_map *m, t_point a, t_point b);

#endif
