##
## Makefile for Makefile in /home/rieux-_t/Documents/rendu/102chiffrement
## 
## Made by thomas rieux-laucat
## Login   <rieux-_t@epitech.net>
## 
## Started on  Wed Nov 19 02:02:04 2014 thomas rieux-laucat
## Last update Thu Mar  5 17:39:27 2015 Ploujoux Christophe
##

SRC	=	main.c \
		my_check.c \
		str_to_word_tab.c \

CC	= 	cc

RM	= 	rm -f

CFLAGS	+= 	-W -Wall -Wextra -pedantic -g3

NAME	= 	107transfert

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
