# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jagagas <jagagas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/15 15:11:54 by jagagas           #+#    #+#              #
#    Updated: 2021/06/16 15:26:53 by jagagas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES = includes/
OPTION = -I$(INCLUDES) -o $(NAME)
NAME = bsq
SRC_PATH = srcs/
SRC = $(SRC_PATH)ft_atoi.c $(SRC_PATH)ft_putchar.c $(SRC_PATH)ft_putstr.c \
		$(SRC_PATH)ft_strlen.c $(SRC_PATH)main.c $(SRC_PATH)save_map.c\
		$(SRC_PATH)map_validation.c $(SRC_PATH)find_bsq.c \
		$(SRC_PATH)resolve.c $(SRC_PATH)input.c


all: $(NAME)

$(NAME):
	$(CC) $(OPTION) $(FLAGS) $(SRC)

clean:

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all