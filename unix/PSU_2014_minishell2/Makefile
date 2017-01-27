##
## Makefile for make in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Thu Nov 27 11:58:32 2014 Ploujoux Christophe
## Last update Sun Mar 15 21:13:47 2015 Ploujoux Christophe
##

RM      = 	rm -f

NAME    = 	mysh

SRC     = 	main.c \
		str2.c \
		list.c \
		str.c \
		exit.c \
		builtins.c \
		exec.c \
		get_env.c \
		str_to_word_tab.c \
		cd.c \
		prompt.c \
		x_malloc.c \
		redir.c \
		check_redir.c

CFLAGS +=	-W -Wall
CFLAGS +=	-Wextra -pedantic

OBJ     = 	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	cc -Wextra -Wall $(OBJ) -o $(NAME) -lncurses

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
