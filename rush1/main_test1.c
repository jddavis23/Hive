/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:18:09 by wdonnell          #+#    #+#             */
/*   Updated: 2021/06/06 18:15:06 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "sudoku_header.h"

int	main(int argc, char **argv)
{
	char **given_arr;

	if (crt_arr(argv))
		given_arr = crt_arr(argv);
	else
		return (0);
	if (argc == 10)
	{
		if (!seventeen_or_greater(given_arr))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (solve_puzzle(given_arr, 0, 0))
			print_sudoku(given_arr);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	free(given_arr);
	return (0);
}
