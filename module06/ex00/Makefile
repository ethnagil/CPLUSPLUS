# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egillesp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/26 16:52:44 by egillesp          #+#    #+#              #
#    Updated: 2021/02/26 16:52:48 by egillesp         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = convert
PPFLAG = -Wall -Wextra -Werror
COMP = clang++ $(PPFLAG)
FILE = convert.cpp

all : $(NAME)

$(NAME) : $(FILE)
	@$(COMP) $(FILE) -o $(NAME)

clean : fclean

fclean :
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
