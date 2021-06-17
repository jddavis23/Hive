/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdonnell <wdonnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 12:22:44 by wdonnell          #+#    #+#             */
/*   Updated: 2021/06/06 17:48:00 by wdonnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_HEADER_H
# define FT_SUDOKU_HEADER_H

char	**crt_arr(char **argv);
void	print_board(char **given_arr);
int		solve_puzzle(char **given_arr, int row, int column);
int		grid_conf(int x, int y, char c_num, char **given_arr);
int		row_conf(int y, char c_num, char **given_arr);
int		column_conf(int x, char c_num, char **given_arr);
char	*ft_strcpy(char *dest, char *src);
void	print_sudoku(char **argv);
int		seventeen_or_greater(char **given_arr);
#endif
