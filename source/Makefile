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


NAME	= push.a

FILES	=  checkab.c /


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
