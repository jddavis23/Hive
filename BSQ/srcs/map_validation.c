/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 07:19:37 by jagagas           #+#    #+#             */
/*   Updated: 2021/06/16 15:56:05 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		chk_init(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\n')
		i++;
	j = 0;
	while (j < i - 3)
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
		j++;
	}
	return (i >= 3 && ft_atoi(str) > 0);
}

int		chk_width(char *str, int width, int height)
{
	int	i;
	int	j;
	int	width_n;

	i = 0;
	while (str[i] != '\n')
		i++;
	j = 0;
	width_n = 0;
	while (str[++i] && j < height)
	{
		if (str[i] != '\n')
			width_n++;
		else if (str[i] == '\n' && width_n == width)
		{
			width_n = 0;
			j++;
		}
		else
			return (0);
	}
	return (j == height);
}

int		chk_chars(t_map map)
{
	int	x;
	int	y;
	int	open;

	open = 0;
	y = 0;
	while (y < map.height)
	{
		x = 0;
		while (x < map.width)
		{
			if (map.grid[y][x] != map.open && map.grid[y][x] != map.obs
				&& map.grid[y][x] != map.full)
				return (0);
			if (open == 0 && map.grid[y][x] == map.open)
				open++;
			x++;
		}
		y++;
	}
	return (open > 0);
}

int		get_height(char *str)
{
	char	*sub_str;
	int		i;
	int		j;

	i = 0;
	while (str[i] != '\n')
		i++;
	sub_str = (char*)malloc(sizeof(char) * (i - 2));
	j = 0;
	while (j < i - 3)
	{
		sub_str[j] = str[j];
		j++;
	}
	sub_str[i - 3] = '\0';
	j = ft_atoi(sub_str);
	ft_putstr(sub_str);
	ft_putchar('\n');
	free(sub_str);
	return (j);
}

void	display_err(void)
{
	ft_putstr("Map Error\n");
}
