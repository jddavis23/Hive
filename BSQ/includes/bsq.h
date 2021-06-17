/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 18:56:13 by jagagas           #+#    #+#             */
/*   Updated: 2021/06/16 16:27:02 by jagagas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct	s_map
{
	int			height;
	int			width;
	char		open;
	char		obs;
	char		full;
	char		**grid;
	char		**valgrid;
	int			max_x;
	int			max_y;
}				t_map;

int				ft_atoi(char *str);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);

char			*resize(char *str);
char			*read_file(int fd);
int				read_ok(char *file, int stdin);

int				chk_init(char *str);
int				chk_width(char *str, int width, int height);
int				chk_chars(t_map map);
int				get_height(char *str);
void			display_err(void);

t_map			init_map(char *str);
char			**init_valgrid(t_map map);

int				cell_value(t_map map, int x, int y);
int				find_min(t_map map, int x, int y);
void			max_coord(t_map *map, int max);
int				max_val(t_map map);

void			solve_map(t_map *map);
void			print_map(t_map map);

#endif
