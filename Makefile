# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchowdhu <hchowdhu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 16:34:45 by hchowdhu          #+#    #+#              #
#    Updated: 2024/11/19 20:16:19 by hchowdhu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_aux.c ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c  ft_putuint.c   

OBJS = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR =  ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re