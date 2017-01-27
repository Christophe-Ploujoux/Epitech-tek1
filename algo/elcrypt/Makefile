##
## Makefile for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1/CPE_2014_allum1
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Fri Feb 20 19:18:02 2015 Ploujoux Christophe
## Last update Sun Mar  1 21:09:48 2015 Ploujoux Christophe
##

RM      = 	rm -f

CC	=	gcc

NAME    = 	elcrypt

SRC     = 	main.c \
		str.c \
		int_char.c \
		key.c \
		convert_base.c \
		text.c \
		xor.c \
		key_rot.c \
		cryptage.c \
		decryptage.c \
		my_xmalloc.c \
		get_next_eight.c \
		check.c \
		find.c

CFLAGS  +=	-W -Wall
CFLAGS  +=	-ansi -pedantic

OBJ     = 	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
