/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkgrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 03:27:56 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/06 17:14:17 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_header.h"

int		grid_conf(int row, int column, char candidate, char **given_arr)
{
	int i;
	int j;
	int start_row;
	int start_col;

	start_row = row - row % 3;
	start_col = column - column % 3;
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (given_arr[i + start_row][j + start_col] == candidate)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		row_conf(int row, char candidate, char **given_arr)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (given_arr[row][i] == candidate)
			return (0);
		++i;
	}
	return (1);
}

int		column_conf(int column, char candidate, char **given_arr)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (given_arr[i][column] == candidate)
			return (0);
		++i;
	}
	return (1);
}
