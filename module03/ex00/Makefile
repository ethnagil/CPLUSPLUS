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

NAME = borderland
CC = clang++
CFLAGS = -Wall -Wextra -Werror  -fsanitize=address  -std=c++98
RM = rm -f

SRCS = ./main.cpp FragTrap.cpp
HEADERS = FragTrap.hpp

OBJS	 =	$(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -I $(HEADERS) -o $@ -c $<

all: $(NAME)

$(NAME):  $(SRCS) $(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean