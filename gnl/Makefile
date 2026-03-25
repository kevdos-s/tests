# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 20:43:35 by kevdos-s          #+#    #+#              #
#    Updated: 2025/09/30 20:43:35 by kevdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################
# NAME + FILE PATH
NAME = gnl

SRCS = ../../get_next_line.c ../../get_next_line_utils.c ./test_gnl.c

################################################################
# OBJS
OBJS = ${SRCS:.c=.o}

################################################################
# CC
CC = cc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror -g -D BUFFER_SIZE=2
INCLUDE = -I .
MAKE = make -C

################################################################
# RULES

all:	${NAME}

${NAME}: ${OBJS}
		${CC} ${CFLAGS} ${INCLUDE} -o ${NAME} ${OBJS}

%.o: %.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
