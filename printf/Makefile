#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrollo <mrollo@student.42barcelon...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 16:16:37 by mrollo            #+#    #+#              #
#    Updated: 2022/02/07 15:54:50 by mrollo           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a

SRCS = ft_printf.c ft_select_format.c ft_print_char.c ft_print_string.c \
		ft_print_int.c ft_print_unsig.c ft_print_hex.c ft_numlen.c ft_print_p.c

INCLUDE = printf.h

CC = gcc
RM = rm -f
AR = ar rcs
RN = ranlib
CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

.c.o: ${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			$(MAKE) -C ./libft all
			cp libft/libft.a ${NAME}
			${AR} ${NAME} ${OBJS}
			${RN} ${NAME}


clean:
			${RM} ${OBJS}
			$(MAKE) -C ./libft clean

fclean: clean
			${RM} ${NAME}
			$(MAKE) -C ./libft fclean

re: fclean all

.PHONY: all clean fclean re
