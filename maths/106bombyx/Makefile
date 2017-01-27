##
## Makefile for Makefile in /home/rieux-_t/Documents/rendu/102chiffrement
## 
## Made by thomas rieux-laucat
## Login   <rieux-_t@epitech.net>
## 
## Started on  Wed Nov 19 02:02:04 2014 thomas rieux-laucat
## Last update Thu Feb 12 19:17:49 2015 Thomas Rieux-Laucat
##

SRC	=	main.c \
		draw.c \
		my_check.c

CC	= 	cc

RM	= 	rm -f

CFLAGS	+= 	-W -Wall -Wextra -pedantic -g3

NAME	= 	106bombyx

OBJS	= 	$(SRC:.c=.o)

all	:	$(NAME)

$(NAME)	: 	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) -lm -lSDL -lSDL_ttf

clean	:
		$(RM) $(OBJS)

fclean	: 	clean
		$(RM) $(NAME)

re	: 	fclean all

.PHONY	:	all clean fclean re
