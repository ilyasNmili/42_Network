# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inmili <inmili@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 18:59:08 by inmili            #+#    #+#              #
#    Updated: 2024/01/19 12:36:13 by inmili           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

SRCS =	ft_printf.c ft_putchar.c ft_putunsigned.c ft_putstr.c \
		ft_putnbr.c ft_puthexa.c ft_putadress.c

OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} $^
		
%o: %c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re 