NAME = libft.a

HEADER = libft.h

SRC = ft_tolower.c ft_strjoin.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ) $(HEADER)

all:
	ar -r $(NAME)  $(OBJ)

clean:
	rm -rf $(OBJ) $(NAME)

fclean:
	clean all

.PHONY: all clean fclean
