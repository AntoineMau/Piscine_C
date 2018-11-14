# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 23:23:09 by anmauffr          #+#    #+#              #
#    Updated: 2018/07/17 14:39:04 by anmauffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = executable

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c

HEADERS = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADERS)
	ar rc libft.a *.o

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
