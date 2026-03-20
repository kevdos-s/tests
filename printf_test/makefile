# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 20:43:35 by kevdos-s          #+#    #+#              #
#    Updated: 2026/03/20 10:42:24 by kevdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_printf

MAIN_FNC = printf_test.c
TEST_FNC = ../test_helper.c

PRINTF_PATH = ../../
PRINTF = ${PRINTF_PATH}/libftprintf.a

OBJDIR = ./objs/
SRCS = ${MAIN_FNC} ${TEST_FNC}
OBJS = ${SRCS:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -g
INCLUDE = -I ${PRINTF_PATH}
MAKE = make -C

all:	${NAME}

$(NAME): ${OBJS}
		${MAKE} ${PRINTF_PATH} all
		${CC} ${CFLAGS} ${INCLUDE} -o ${NAME} ${OBJS} ${PRINTF}

%.o: %.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}
		${MAKE} ${PRINTF_PATH} clean
fclean:	clean
		${RM} ${NAME}
		${MAKE} ${PRINTF_PATH} fclean

re:		fclean all
