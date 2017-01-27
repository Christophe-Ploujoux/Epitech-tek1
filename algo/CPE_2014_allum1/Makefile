##
## Makefile for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1/CPE_2014_allum1
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Fri Feb 20 19:18:02 2015 Ploujoux Christophe
## Last update Fri Feb 20 19:18:06 2015 Ploujoux Christophe
##

RM      = 	rm -f

NAME    = 	allum1

SRC     = 	main.c \
		tab_function.c \
		buffer.c \
		exit.c \
		check.c \
		ia.c \
		win_or_lose.c \
		str.c \
		str_to_word_tab.c

OBJ     = 	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	cc -Wextra -Wall $(OBJ) -o $(NAME) -lncurses

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
