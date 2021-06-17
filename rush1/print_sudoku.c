/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:05:43 by vgrinan           #+#    #+#             */
/*   Updated: 2021/06/06 17:23:36 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sudoku_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_sudoku_putstr(char *row)
{
	int index;

	index = 0;
	while (index < 9)
	{
		ft_sudoku_putchar(row[index]);
		if (index < 8)
			write(1, " ", 1);
		index++;
	}
	ft_sudoku_putchar('\n');
}

void	print_sudoku(char **given_arr)
{
	int i;

	i = 0;
	while (i < 9)
	{
		ft_sudoku_putstr(given_arr[i]);
		i++;
	}
}
