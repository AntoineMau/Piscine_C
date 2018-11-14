# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 23:23:09 by anmauffr          #+#    #+#              #
#    Updated: 2018/07/17 00:05:56 by anmauffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/ft_atoi.c srcs/ft_condition.c srcs/ft_doop.c srcs/ft_put.c \
	  srcs/ft_calcul.c

HEADER = include/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -I $(HEADER)

clean:
	rm -f $(NAME)

re: clean all
