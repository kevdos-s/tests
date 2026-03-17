# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevdos-s <kevdos-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 20:43:35 by kevdos-s          #+#    #+#              #
#    Updated: 2025/10/08 14:20:01 by kevdos-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_libft

MAIN_FNC = libft.c
TEST_FNC = ../test_helper.c
PART1 = ../../ft_isalpha.c ../../ft_memcpy.c ../../ft_isdigit.c ../../ft_isalnum.c \
		 ../../ft_isascii.c ../../ft_isprint.c ../../ft_strlen.c ../../ft_memset.c \
		../../ft_bzero.c ../../ft_memmove.c ../../ft_strlcpy.c ../../ft_strlcat.c \
		 ../../ft_toupper.c ../../ft_tolower.c ../../ft_strchr.c ../../ft_strrchr.c \
		 ../../ft_strnstr.c ../../ft_atoi.c ../../ft_calloc.c ../../ft_strdup.c

PART2 = ../../ft_substr.c ../../ft_strjoin.c ../../ft_strtrim.c ../../ft_split.c \
		../../ft_itoa.c ../../ft_strmapi.c ../../ft_striteri.c ../../ft_putchar_fd.c \


SRCS = ${MAIN_FNC} ${TEST_FNC} ${PART1} ${PART2}
OBJS = ${SRCS:.c=.o}
CC = cc
RM		= rm -f
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE = -I .

all:	${NAME}

$(NAME): ${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS}

%.o: %.c
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

clean:
		${RM} ${OBJS}
fclean:	clean
		${RM} ${NAME}

re:		fclean all
