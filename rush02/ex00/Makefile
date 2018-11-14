# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmauffr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/21 09:16:50 by anmauffr          #+#    #+#              #
#    Updated: 2018/07/25 14:55:17 by anmauffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE_2 = colle-2

EXE_00 = colle-00

EXE_01 = colle-01

EXE_02 = colle-02

EXE_03 = colle-03

EXE_04 = colle-04

SRC_2 = srcs/main.c srcs/ft_put.c srcs/rush00_modif/rush00.c \
	srcs/rush00_modif/rush01.c srcs/rush00_modif/rush02.c \
	srcs/rush00_modif/rush03.c srcs/rush00_modif/rush04.c srcs/ft_count_x_y.c \
	srcs/ft_print.c

SRC_00 = srcs/rush00/main.c srcs/rush00/rush00.c srcs/ft_atoi.c \
	srcs/ft_put.c

SRC_01 = srcs/rush00/main.c srcs/rush00/rush01.c srcs/ft_atoi.c \
	srcs/ft_put.c

SRC_02 = srcs/rush00/main.c srcs/rush00/rush02.c srcs/ft_atoi.c \
	srcs/ft_put.c

SRC_03 = srcs/rush00/main.c srcs/rush00/rush03.c srcs/ft_atoi.c \
	srcs/ft_put.c

SRC_04 = srcs/rush00/main.c srcs/rush00/rush04.c srcs/ft_atoi.c \
	srcs/ft_put.c

HEADER = include/*.h

all: $(EXE_2) $(EXE_00) $(EXE_01) $(EXE_02) $(EXE_03) $(EXE_04)
	@clear
	@echo "\x1b[32m\t Compilation de tous les fichiers en cours...  \n"
	@echo "  0 %  [                                                  ]"
	@sleep 1
	@clear
	@echo "\t Compilation de tous les fichiers en cours...  \n"
	@echo " 25 %  [//////////                                        ]"
	@sleep 1
	@clear
	@echo "\t Compilation de tous les fichiers en cours...  \n"
	@echo " 50 % [//////////////////////////                         ]"
	@sleep 1
	@clear
	@echo "\t Compilation de tous les fichiers en cours...  \n"
	@echo " 75 %  [//////////////////////////////////////            ]"
	@sleep 1
	@clear
	@echo "\t Compilation de tous les fichiers en cours...  \n"
	@echo "100 %  [//////////////////////////////////////////////////]"
	@sleep 1.5
	@clear
	@echo "\tCOMPILATION REUSSIE"
	@sleep 0.7
	@clear
	@ls

$(EXE_2):
	@gcc -Wall -Wextra -Werror -o $(EXE_2) $(SRC_2) -I $(HEADER)

$(EXE_00):
	@gcc -Wall -Wextra -Werror -o $(EXE_00) $(SRC_00) -I $(HEADER)

$(EXE_01):
	@gcc -Wall -Wextra -Werror -o $(EXE_01) $(SRC_01) -I $(HEADER)

$(EXE_02):
	@gcc -Wall -Wextra -Werror -o $(EXE_02) $(SRC_02) -I $(HEADER)

$(EXE_03):
	@gcc -Wall -Wextra -Werror -o $(EXE_03) $(SRC_03) -I $(HEADER)

$(EXE_04):
	@gcc -Wall -Wextra -Werror -o $(EXE_04) $(SRC_04) -I $(HEADER)

clean:
	@rm $(EXE_2) $(EXE_00) $(EXE_01) $(EXE_02) $(EXE_03) $(EXE_04)
	@clear
	@echo "\x1b[31m\t Suppresion de tous les fichiers en cours...  \n"
	@echo "100 %  [///////////////////////////////////////////////////]"
	@sleep 1
	@clear
	@echo "\t Suppresion de tous les fichiers en cours...  \n"
	@echo " 75 %  [/////////////////////////////////////             ]"
	@sleep 1
	@clear
	@echo "\t Suppresion de tous les fichiers en cours...  \n"
	@echo " 50 % [//////////////////////////                         ]"
	@sleep 1
	@clear
	@echo "\t Suppresion de tous les fichiers en cours...  \n"
	@echo " 25 %  [//////////                                        ]"
	@sleep 1
	@clear
	@echo "\t Suppresion de tous les fichiers en cours...  \n"
	@echo "  0 %  [                                                  ]"
	@sleep 1.5
	@clear
	@echo "\tSUPPRESION REUSSIE"
	@sleep 0.7
	@clear
	@ls

fclean: clean

re: fclean all
