# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egillesp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/26 16:50:10 by egillesp          #+#    #+#              #
#    Updated: 2021/02/26 16:50:13 by egillesp         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = pony
CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = ./pony.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean
