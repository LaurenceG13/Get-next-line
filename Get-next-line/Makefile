# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagirard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 21:54:53 by lagirard          #+#    #+#              #
#    Updated: 2017/04/30 22:16:00 by lagirard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = get_next_line

SRC = get_next_line.c main.c

FLAGS = -Wall -Wextra -Werror

INCLUDE = get_next_line.h

LIB = libft/libft.a

all : $(NAME)

$(NAME):
	@make -C libft/
	gcc  $(FLAGS) -o $(NAME) -I $(INCLUDE) $(SRC) $(LIB) -g

clean :
	@make -C libft/ clean
	rm -rf all

fclean : clean
	@make -C libft/ fclean
	rm -rf $(NAME)

re : fclean all
