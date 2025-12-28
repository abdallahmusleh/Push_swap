NAME = push_swap

SRC = main.c atolong.c  valid_args.c sort2and3.c sort4.c sort5.c\
 push.c swap.c rotate.c reverse_rotate.c lst.c sort_big_numbers.c\

CC = cc

LIBRARY = push_swap.h
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
all : $(NAME)

$(NAME) : $(OBJ) $(LIBRARY)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	 rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : all re fclean clean