/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:35:19 by jagagas           #+#    #+#             */
/*   Updated: 2021/06/16 16:23:03 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**matrix(char *str, int height, int width)
{
	char	**map;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	map = (char**)malloc((height + 1) * sizeof(char*));
	while (str[i] != '\n')
		++i;
	while (str[++i] != '\0')
	{
		j = 0;
		map[k] = (char*)malloc((width + 2) * sizeof(char));
		while (j < width)
		{
			map[k][j] = str[i++];
			++j;
		}
		map[k][j++] = '\n';
		map[k][j] = '\0';
		++k;
	}
	map[height] = NULL;
	return (map);
}

t_map	init_map(char *str)
{
	t_map	map;
	int		i;

	map.grid = 0;
	if (chk_init(str) == 0)
		return (map);
	map.height = get_height(str);
	i = 0;
	while (str[i] != '\n')
		i++;
	map.open = str[i - 3];
	map.obs = str[i - 2];
	map.full = str[i - 1];
	map.width = 0;
	i++;
	while (str[i++] != '\n')
		map.width++;
	if (map.height > 0 && map.width > 0
		&& chk_width(str, map.width, map.height))
		map.grid = matrix(str, map.height, map.width);
	free(str);
	return (map);
}

char	**init_valgrid(t_map map)
{
	char	**res;
	int		x;
	int		y;

	res = (char**)malloc(sizeof(char*) * (map.height + 1));
	y = 0;
	while (y < map.height)
	{
		x = 0;
		res[y] = (char*)malloc(sizeof(char) * (map.width + 2));
		while (x < map.width + 1)
		{
			if (map.grid[y][x] == '\n')
				res[y][x] = '\n';
			else
				res[y][x] = '0' + cell_value(map, x, y);
			x++;
		}
		res[y][map.width + 1] = '\0';
		y++;
	}
	res[map.height] = 0;
	return (res);
}
