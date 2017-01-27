##
## Makefile for my_mastermind in /home/ploujo_c/rendu/colle-4-BA67
##
## Made by christophe ploujoux
## Login   <ploujo_c@epitech.net>
##
## Started on  Mon May 18 18:55:29 2015 christophe ploujoux
## Last update Mon May 18 22:09:01 2015 christophe ploujoux
##

RM	= 	rm -f

CC	= 	gcc

CFLAGS	+=	-Wall -Wextra

NAME	=	my_mastermind

SRC	=	main.c \
		mastermind.c \
		struct.c \
		pos.c \
		free.c \
		nbr.c \
		str.c

OBJ	= 	$(SRC:.c=.o)

all	: 	$(NAME)

$(NAME)	: 	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all re fclean clean
