# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 18:16:41 by yoshin            #+#    #+#              #
#    Updated: 2024/10/07 14:28:20 by yoshin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile v1.0

NAME		=	libft.a

CFLAGS		=	-Wall -Wextra -Werror
ARFLAGS		=	rc

SRCS		=	$(wildcard ft_*.c)
OBJS		=	$(patsubst %.c, %.o, $(SRCS))
HEADERS		=	libft.h

.PHONY: $(NAME) all clean fclean re
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< $(HEADERS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(HEADERS).gch

re: fclean all
