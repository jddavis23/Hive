/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:36:22 by jagagas           #+#    #+#             */
/*   Updated: 2021/06/16 10:46:16 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		cell_value(t_map map, int x, int y)
{
	if (map.grid[y][x] == map.obs)
		return (0);
	return (1);
}

int		find_min(t_map map, int x, int y)
{
	char	min;

	min = map.valgrid[y - 1][x - 1];
	if (min > map.valgrid[y][x - 1])
		min = map.valgrid[y][x - 1];
	if (min > map.valgrid[y - 1][x])
		min = map.valgrid[y - 1][x];
	return (min - '0');
}

int		max_val(t_map map)
{
	char	max;
	int		x;
	int		y;

	max = 0;
	y = 0;
	while (y < map.height)
	{
		x = 0;
		while (x < map.width)
		{
			if (max < map.valgrid[y][x] - '0')
				max = map.valgrid[y][x] - '0';
			x++;
		}
		y++;
	}
	return (max);
}

void	max_coord(t_map *map, int max)
{
	int			x;
	int			y;

	y = 0;
	while (y < map->height)
	{
		x = 0;
		while (x < map->width)
		{
			if (map->valgrid[y][x] == '0' + max)
			{
				map->max_x = x;
				map->max_y = y;
				return ;
			}
			x++;
		}
		y++;
	}
}
