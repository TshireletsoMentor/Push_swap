NAME	= push.a

FILES	= 


CC		= gcc

FLAGS	= -Wall -Wextra -Werror

LIB		= push.h

OBJ		= $(FILES:%.c=%.o)

all:	  $(NAME)

$(NAME):
		@$(CC) $(FLAGS) -c $(FILES) -I (LIB)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re:		fclean all