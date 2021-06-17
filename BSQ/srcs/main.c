/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 09:37:17 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/16 15:46:10 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	int		i;
	char	*str;
	t_map	map;

	i = 1;
	while (i < argc)
	{
		str = resize(read_file(read_ok(argv[i], 0)));
		map = init_map(str);
		solve_map(&map);
		i++;
	}
	if (argc == 1)
	{
		str = resize(read_file(read_ok(argv[0], 1)));
		map = init_map(str);
		solve_map(&map);
	}
	return (0);
}
