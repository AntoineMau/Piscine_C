NAME = bsq
SRC = ./srcs/ft_puttruc.c ./srcs/ft_split.c ./srcs/main.c ./srcs/ft_puttruc2.c \
	  ./srcs/ft_count_x_y.c ./srcs/ft_detection.c
HEADER = ./includes/

all : $(NAME)

$(NAME) :
	@gcc -Wall -Werror -Wextra $(SRC) -o $(NAME) -I $(HEADER)

fclean :
	@rm -f $(NAME)

re : fclean all
