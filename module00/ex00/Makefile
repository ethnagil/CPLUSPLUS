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

NAME = megaphone
PPFLAG = -Wall -Wextra -Werror
COMP = clang++ $(PPFLAG)
FILE = megaphone.cpp

all : $(NAME)

$(NAME) :
	@$(COMP) $(FILE) -o $(NAME)

clean :

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
