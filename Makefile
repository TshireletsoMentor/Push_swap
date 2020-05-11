# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmentor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 07:25:25 by tmentor           #+#    #+#              #
#    Updated: 2019/09/13 07:25:30 by tmentor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME1	= checker

NAME2	= push_swap

FILES	=	source/checkab.c \
			source/error_add.c \
			source/libft1.c \
			source/libft2.c \
			source/libft3.c \
			source/libft4.c \
			source/num_add.c \
			source/ops.c \
			source/sort_3_num.c \
			source/sort_6_num.c \
			source/sort_x_num.c 

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

all:	$(NAME1) $(NAME2)


$(NAME1):
		@$(CC) $(FLAGS) checker.c $(FILES) -o $(NAME1)

$(NAME2):
		@$(CC) $(FLAGS) push_swap.c $(FILES) -o $(NAME2)

clean:
		@rm -f $(NAME1)
		@rm -f $(NAME2)

re:	clean
