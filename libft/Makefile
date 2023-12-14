# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-monn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 15:11:26 by tle-monn          #+#    #+#              #
#    Updated: 2023/07/24 16:27:26 by pameyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

PRE	= .

HEAD	= .

SRC	= ft_atoi.c ft_split.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_strncmp.c ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_memcmp.c ft_memset.c ft_substr.c ft_memmove.c ft_memcpy.c ft_putendl_fd.c ft_strlcpy.c ft_calloc.c ft_itoa.c ft_strlcat.c ft_memchr.c ft_strchr.c ft_striteri.c ft_strnstr.c ft_strrchr.c ft_strmapi.c ft_strtrim.c ft_printf.c ft_printf_utils.c ft_print_hex.c ft_print_ptr.c ft_print_unsigned.c

SRC_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

SRCS	= ${addprefix ${PRE}/, ${SRC}}

SRCS_B	= ${addprefix ${PRE}/, ${SRC_B}}

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra


all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -I${HEAD} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${OBJS_B}
	ar rcs ${NAME} ${OBJS_B}

clean:
	rm -f ${OBJS} ${OBJS_B}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
