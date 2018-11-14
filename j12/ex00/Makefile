# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 13:43:31 by anmauffr          #+#    #+#              #
#    Updated: 2018/07/17 15:31:25 by anmauffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = srcs/ft_main.c srcs/ft_put.c

HEADER = include/ft_header.h

all : $(NAME)

$(NAME) :
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I $(HEADER)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all
