NAME1		= checker

NAME2		= push_swap

FILES		= source/push.a \
				source/libft/libft.a

checker		= gcc

FLAGS		= -Wall -Wextra -Werror

all:	pre $(NAME1) $(NAME2)

pre:	
		@cd source && make
		@cd source && make clean
		@cd source/libft && make
		@cd source/libft && make clean

$(NAME1):
		@$(CC) $(FLAGS) $(FILES) checker.c -o $(NAME1)

$(NAME2):
		@$(CC) $(FLAGS) $(FILES) push_swap.c -o $(NAME2)

clean:
		@cd source && make fclean
		@cd source/libft && make fclean

fclean: clean
		@rm -f $(NAME1)
		@rm -f $(NAME2)

re:		fclean all