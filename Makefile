# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduardo <eduardo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:08:17 by eduarodr          #+#    #+#              #
#    Updated: 2023/01/26 17:11:26 by eduardo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	push_swap.c\
		srcs/push_swap_utils.c\
		srcs/sorters.c\
		srcs/sorter_functions.c\
		srcs/sorter_functions2.c\
		srcs/push_swap_utils2.c\
		srcs/sorter_functions3.c\

OBJ =	${SRC:.c=.o}

NAME = push_swap

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

PRINTF_PATH = ../printf --no-print-directory
PRINTF_NAME = ../printf libftprintf.a

all:	$(PRINTF_NAME) $(NAME)

$(PRINTF_NAME):
		@make -C $(PRINTF_PATH)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(PRINTF_NAME)

clean:
	@make fclean -C $(PRINTF_PATH)
	$(RM) $(OBJ)

fclean:	clean
		@make fclean -C $(PRINTF_PATH)
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
