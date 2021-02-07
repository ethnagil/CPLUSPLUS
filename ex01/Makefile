NAME = phony.out
# CC = clang++
CC = g++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCSP = ./main.cpp phony.cpp

OBJSP = ${SRCSP:.cpp=.o}

.c.o:
	${CC} ${CFLAGS} -I includes ./ -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): ${OBJSP}
	ar rcs ${NAME} ${OBJSP}

clean:
	$(RM) $(OBJSP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus