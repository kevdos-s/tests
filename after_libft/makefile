# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 20:43:35 by kevdos-s          #+#    #+#              #
#    Updated: 2026/04/01 02:10:15 by kevdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_newlibft

MAIN_FNC = main.c
TEST_FNC = ../test_helper.c

LIBFT_PATH = ../../
LIBFT = ${LIBFT_PATH}/libft.a

OBJDIR = ./objs/
SRCS = ${MAIN_FNC} ${TEST_FNC}
OBJS = ${SRCS:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -g
INCLUDE = -I ${LIBFT_PATH}
MAKE = make -C

all:	${NAME}

$(NAME): ${OBJS}
		${MAKE} ${LIBFT_PATH} all
		${CC} ${CFLAGS} ${INCLUDE} -o ${NAME} ${OBJS} ${LIBFT}

%.o: %.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}
		${MAKE} ${LIBFT_PATH} clean
fclean:	clean
		${RM} ${NAME}
		${MAKE} ${LIBFT_PATH} fclean

re:		fclean all
