##
## Makefile for Makefile in /home/rieux-_t/Documents/rendu/102chiffrement
## 
## Made by thomas rieux-laucat
## Login   <rieux-_t@epitech.net>
## 
## Started on  Wed Nov 19 02:02:04 2014 thomas rieux-laucat
## Last update Wed Dec 17 14:58:14 2014 Ploujoux Christophe
##

SRC	=	main.c \
		sphere.c \
		cylindre.c \
		cone.c \
		my_check.c

CC	= 	cc

RM	= 	rm -rf

CFLAGS	+= 	-Wall -Wextra -pedantic -g

NAME	= 	104intersection

OBJS	= 	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	: 	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) -lm

clean	:
		$(RM) $(OBJS)

fclean	: 	clean
		$(RM) $(NAME)

re	: 	fclean all
