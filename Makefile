# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbardett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 21:34:25 by mbardett          #+#    #+#              #
#    Updated: 2022/04/11 21:52:54 by mbardett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a


OBJS = ${SRCS:.c=.o}

RM	= rm -f

GCCF = gcc -Wall -Wextra -Werror

LIB = ar -rcs

SRCS = ft_printchar.c ft_print_hex.c ft_printnumber.c ft_printstring.c ft_printu.c ft_printf.c ft_print_pointer.c

all: ${NAME}

$(NAME): ${OBJS}
				${LIB} ${NAME} ${OBJS}

%.o : %.c ft_printf.h
	${GCCF} -c $< -o $@

clean:
				${RM} ${OBJS}

fclean: clean
				${RM} ${NAME}

re:				fclean all
