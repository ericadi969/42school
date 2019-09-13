# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btennie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 11:32:15 by btennie           #+#    #+#              #
#    Updated: 2019/09/08 11:32:17 by btennie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC =  ft_display_file.c 

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC) 
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all