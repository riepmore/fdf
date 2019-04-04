/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremore <pierremore@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/10/11 17:35:42 by pierremore        #+#    #+#             */
/*   Updated: 2014/10/12 15:14:29 by pierremore       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map		take_length(char **line)
{
	int		i;
	char	**temp;
	t_map	map;

	i = -1;
	map.scol = 0;
	temp = ft_strsplit(line[0], ' ');
	while (temp[++i])
		map.scol++;
	free_char_tab(temp);
	i = -1;
	map.slin = 0;
	while (line[++i])
	{
		if (line[i][0] != '\0')
			map.slin++;
	}
	return (map);
}

int			if_int(char *str)
{
	int		i;

	i = -1;
	if (str[0] == '-')
		i++;
	while (str[++i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int			take_intmap_bis(t_map *map, int y, char *line)
{
	int				x;
	static int		tmp = -42;
	char			**temp;

	x = -1;
	map->map[y] = (int *)malloc(sizeof(int) * map->scol);
	temp = ft_strsplit(line, ' ');
	while (temp[++x])
	{
		map->map[y][x] = ft_atoi(temp[x]);
		if (if_int(temp[x]) == 0)
			error_char();
	}
	if (x != tmp && tmp != -42)
		error_len();
	tmp = x;
	free_char_tab(temp);
	return (0);
}

t_map		take_intmap(char **line)
{
	t_map		map;
	int			i;
	int			y;

	y = 0;
	i = -1;
	map = take_length(line);
	map.map = (int **)malloc(sizeof(int *) * map.slin);
	while (line[++i])
	{
		if (line[i][0] == '\0')
		{
			free_char_tab(line);
			return (map);
		}
		take_intmap_bis(&map, y, line[i]);
		y++;
	}
	free_char_tab(line);
	return (map);
}

t_map		take_map(char *path)
{
	t_map	map;
	char	*str;
	char	buf;

	str = NULL;
	map.fd = open(path, O_RDONLY);
	while (read(map.fd, &buf, 1))
	{
		str = ft_append(str, buf);
	}
	map = take_intmap(ft_strsplit(str, '\n'));
	return (map);
}
