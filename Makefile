# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoshin <yoshin@student.42gyeongsan.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 18:16:41 by yoshin            #+#    #+#              #
#    Updated: 2024/10/01 10:31:08 by yoshin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile v1.0

NAME		=	libft.a

CFLAGS		=	-Wall -Wextra -Werror
ARFLAGS		=	rc

SRCS		=	$(wildcard ft_*.c)
OBJS		=	$(patsubst %.c, %.o, $(SRCS))

.PHONY: $(NAME) all clean fclean re
all: $(NAME)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< libft.h

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
