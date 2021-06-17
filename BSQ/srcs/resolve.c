/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:39:54 by jagagas           #+#    #+#             */
/*   Updated: 2021/06/16 16:22:39 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	resolve_valgrid(t_map *map)
{
	int	x;
	int	y;

	y = 1;
	while (y < map->height)
	{
		x = 1;
		while (x < map->width + 1)
		{
			if (map->valgrid[y][x] > '0')
			{
				map->valgrid[y][x] += find_min(*map, x, y);
			}
			x++;
		}
		y++;
	}
}

void	fill_grid(t_map *map, int max)
{
	int		x;
	int		y;

	y = map->max_y;
	while (y > map->max_y - max)
	{
		x = map->max_x;
		while (x > map->max_x - max)
		{
			map->grid[y][x] = map->full;
			x--;
		}
		y--;
	}
}

void	solve_map(t_map *map)
{
	int	i;

	if (!map->grid || !chk_chars(*map))
	{
		display_err();
		return ;
	}
	map->valgrid = init_valgrid(*map);
	resolve_valgrid(map);
	max_coord(map, max_val(*map));
	fill_grid(map, max_val(*map));
	print_map(*map);
	i = 0;
	while (i < map->height)
	{
		free(map->grid[i]);
		free(map->valgrid[i]);
		i++;
	}
	free(map->grid);
	free(map->valgrid);
}

void	print_map(t_map map)
{
	int	i;

	if (map.grid)
	{
		i = 0;
		while (map.grid[i])
		{
			ft_putstr(map.grid[i]);
			i++;
		}
	}
}
