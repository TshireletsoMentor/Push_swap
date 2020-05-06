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


NAME	= push_swap.a

FILES	=	checkab.c \
			error_add.c \
			libft1.c \
			libft2.c \
			libft3.c \
			libft4.c \
			num_add.c \
			ops.c \
			sort_3_num.c \
			sort_6_num.c \
			sort_x_num.c 

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

LIB		= source/push_swap.h

OBJ		= $(FILES:%.c=%.o)

all:	  $(NAME)

$(NAME):
		@$(CC) $(FLAGS) -c $(FILES) -I $(LIB) 
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re:		fclean all
