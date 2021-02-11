# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/11 12:58:34 by cfico-vi          #+#    #+#              #
#    Updated: 2021/02/11 16:46:38 by cfico-vi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_memset.c

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

all:		${NAME}

teste:		${SRCS} main.c
			${CC} ${CFLAGS} ${SRCS} main.c

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	gcc ${CFLAGS} -c ${SRCS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
