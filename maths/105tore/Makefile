##
## Makefile for Makefile in /home/rieux-_t/Documents/rendu/102chiffrement
## 
## Made by thomas rieux-laucat
## Login   <rieux-_t@epitech.net>
## 
## Started on  Wed Nov 19 02:02:04 2014 thomas rieux-laucat
## Last update Thu Jan  8 12:02:07 2015 Ploujoux Christophe
##

SRC	=	bissection.c \
		newton.c \
		secante.c \
		my_check.c \
		main.c

CC	= 	cc

RM	= 	rm -f

CFLAGS	+= 	-Wall -Wextra -pedantic -g

NAME	= 	105tore

OBJS	= 	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	: 	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) -lm

clean	:
		$(RM) $(OBJS)

fclean	: 	clean
		$(RM) $(NAME)

re	: 	fclean all
