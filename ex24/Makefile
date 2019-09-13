# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btennie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 10:41:56 by btennie           #+#    #+#              #
#    Updated: 2019/09/08 12:41:27 by btennie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOUDRCE_FILE = ./srcs/
HEADER = ./includes/*.h
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(SOUDRCE_FILE)ft_putchar.c\
	  $(SOUDRCE_FILE)ft_putstr.c\
	  $(SOUDRCE_FILE)ft_strcmp.o\
	  $(SOUDRCE_FILE)ft_strlen.o\
	  $(SOUDRCE_FILE)ft_swap.o

OBJ = ft_putchar.o\
	  ft_putstr.o\
	  ft_strcmp.o\
	  ft_strlen.o\
	  ft_swap.o

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(OPTION) $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
