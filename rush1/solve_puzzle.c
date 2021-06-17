/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_puzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 15:25:53 by wdonnell          #+#    #+#             */
/*   Updated: 2021/06/06 17:09:56 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_header.h"

int		conflict(int row, int column, char c_num, char **given_arr)
{
	if (row_conf(row, c_num, given_arr)
	&& column_conf(column, c_num, given_arr)
	&& grid_conf(row, column, c_num, given_arr))
		return (1);
	return (0);
}

int		solve_puzzle(char **given_arr, int row, int column)
{
	char c_num;

	if (row == 8 && column == 9)
		return (1);
	if (column == 9)
	{
		row++;
		column = 0;
	}
	if (given_arr[row][column] != '.')
		return (solve_puzzle(given_arr, row, column + 1));
	c_num = '1';
	while (c_num <= '9')
	{
		if (conflict(row, column, c_num, given_arr))
		{
			given_arr[row][column] = c_num;
			if (solve_puzzle(given_arr, row, column + 1))
				return (1);
		}
		given_arr[row][column] = '.';
		c_num++;
	}
	return (0);
}
