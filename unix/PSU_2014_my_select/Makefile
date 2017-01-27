##
## Makefile for my_ls in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Thu Nov 27 11:58:32 2014 Ploujoux Christophe
## Last update Sun Jan 11 13:00:41 2015 Ploujoux Christophe
##

RM      = 	rm -f

NAME    = 	my_select

SRC     = 	main.c \
		str.c \
		init.c \
		list.c \
		x_fonc.c \
		term.c \
		mv_curs.c

OBJ     = 	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	cc -Wextra -Wall $(OBJ) -o $(NAME) -lncurses

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
