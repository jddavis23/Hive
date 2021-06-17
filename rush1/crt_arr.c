/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crt_arr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:02:41 by jdavis            #+#    #+#             */
/*   Updated: 2021/06/06 18:28:37 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "sudoku_header.h"

int		fill_row(char **argv, char **board, int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (argv[i + 1][j] == '\0')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		board[i][j] = argv[i + 1][j];
		j++;
	}
	return (1);
}

char	**crt_arr(char **argv)
{
	char	**board;
	int		i;

	board = (char **)malloc(9 * sizeof(char *));
	if (board)
	{
		i = 0;
		while (i < 9)
		{
			board[i] = (char*)malloc(9 * sizeof(char));
			if (!fill_row(argv, board, i))
				return (0);
			i++;
		}
		return (board);
	}
	return (0);
}
