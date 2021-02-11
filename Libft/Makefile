# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/11 12:58:34 by cfico-vi          #+#    #+#              #
#    Updated: 2021/02/11 15:22:19 by cfico-vi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= hello

SRCS	= ft_memset.c

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

.c.o :
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
