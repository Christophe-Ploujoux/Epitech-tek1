##
## Makefile for minitalk in /home/ploujo_c/rendu/unix/PSU_2014_minitalk
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Tue Mar 17 03:49:40 2015 Ploujoux Christophe
## Last update Sat Apr 11 19:16:53 2015 
##

CC	= 	gcc

RM      = 	rm -f

NAME1   = 	asm/asm

NAME2	= 	corewar/corewar

SRC1  	= 	asm/main.c \
		asm/asm_pars.c \
	  	asm/base_fonction.c \
	  	asm/get_next_line.c \
	  	asm/list.c \
	  	asm/str.c \
	  	asm/strtok.c \
		asm/my_strcmp.c \
		asm/my_putnbr_base.c \
		asm/my_getnbr.c \
		asm/my_strcpy.c \
		asm/header.c \
		asm/transform.c \
		asm/tab.c \
		asm/codage.c

SRC2	= 	corewar/main.c \
	  	corewar/base_fonction.c

CFLAGS += 	-W -Wall
CFLAGS += 	-Wextra -pedantic

OBJ1 	= 	$(SRC1:.c=.o)
OBJ2  	= 	$(SRC2:.c=.o)

all	: 	$(NAME1) $(NAME2)

$(NAME2): 	$(OBJ2)
		$(CC) $(OBJ2) -o $(NAME2)

$(NAME1): 	$(OBJ1)
		$(CC) $(OBJ1) -o $(NAME1)

clean	:
		$(RM) $(OBJ1)
		$(RM) $(OBJ2)

fclean	:	clean
		$(RM) $(NAME1)
		$(RM) $(NAME2)

re	: 	fclean all
