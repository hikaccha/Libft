# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 07:54:14 by hichikaw          #+#    #+#              #
#    Updated: 2024/11/18 03:11:03 by hichikaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_print_char.c ft_print_str.c ft_print_num.c ft_print_hex.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME0 $(OBJS))
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

flean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
