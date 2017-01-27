##
## Makefile for minitalk in /home/ploujo_c/rendu/unix/PSU_2014_minitalk
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Tue Mar 17 03:49:40 2015 Ploujoux Christophe
## Last update Wed Mar 25 10:04:46 2015 Ploujoux Christophe
##

CC	= gcc

RM      = rm -f

NAME1   = client/client

NAME2	= server/server

SRC1  	= client/main.c \
	  client/my_getnbr.c \
	  client/str.c

SRC2	= server/str.c \
	  server/main.c \
	  server/my_put_nbr.c \
	  server/my_getnbr_base.c

CFLAGS += -W -Wall
CFLAGS += -Wextra -pedantic

OBJ1 	= $(SRC1:.c=.o)
OBJ2  	= $(SRC2:.c=.o)

all: $(NAME1) $(NAME2)

$(NAME2): $(OBJ2)
	$(CC) $(OBJ2) -o $(NAME2)

$(NAME1): $(OBJ1)
	$(CC) $(OBJ1) -o $(NAME1)

clean:
	$(RM) $(OBJ1)
	$(RM) $(OBJ2)

fclean: clean
	$(RM) $(NAME1)
	$(RM) $(NAME2)

re: fclean all
