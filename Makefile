# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduarodr <eduarodr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:08:17 by eduarodr          #+#    #+#              #
#    Updated: 2023/03/03 18:57:27 by eduarodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	push_swap.c\
		srcs/push_swap_utils.c\
		srcs/sorter35.c\
		srcs/sorter_functions.c\
		srcs/sorter_functions2.c\
		srcs/push_swap_utils2.c\
		srcs/sorter_functions3.c\
		srcs/sorter_functions4.c\
		srcs/sorter_functions5.c\
		srcs/surtar.c\

OBJ =	${SRC:.c=.o}

NAME = push_swap

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

PRINTF_PATH = ./printf
PRINTF_NAME = libftprintf.a

all:	$(PRINTF_NAME) $(NAME)

$(PRINTF_NAME):
		@make -C $(PRINTF_PATH) --no-print-directory

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -L ./printf -lftprintf

clean:
	@make fclean -C $(PRINTF_PATH)
	$(RM) $(OBJ)

fclean:	clean
		@make fclean -C $(PRINTF_PATH)
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
