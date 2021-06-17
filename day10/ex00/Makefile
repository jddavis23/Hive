# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavis <jdavis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 07:46:49 by jdavis            #+#    #+#              #
#    Updated: 2021/06/08 10:27:22 by jdavis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = ../includes/ft.h
PUTCHAR = ../srcs/ft_putchar.c
SWAP = ../srcs/ft_swap.c
PUTSTR = ../srcs/ft_putstr.c
STRLEN = ../srcs/ft_strlen.c
STRCMP = ../srcs/ft_strcmp.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

.PHONY: clean fclean re all

all: libft.a

$(NAME):
	gcc -c -Wall -Werror -Wextra $(PUTCHAR) $(STRCMP) $(STRLEN) $(SWAP) \
	 $(PUTSTR) $(INCLUDE)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
