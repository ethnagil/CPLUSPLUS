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

NAME = whatever
PPFLAG = -Wall -Wextra -Werror -fsanitize=address
COMP = clang++ $(PPFLAG)
FILE = main.cpp
HEADER = whatever.hpp

all : $(NAME)

$(NAME) : $(FILE) $(HEADER)
	@$(COMP) $(FILE) -o $(NAME)

clean : fclean

fclean :
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean
