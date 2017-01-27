##
## Makefile for make in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Thu Nov 27 11:58:32 2014 Ploujoux Christophe
## Last update Fri Jun  5 02:39:56 2015 Ploujoux Christophe
##

RM      = 	rm -f

NAME    = 	42sh

SRC     = 	main.c \
		exit.c \
		builtins.c \
		exec.c \
		get_env.c \
		check_redir.c \
		echo.c \
		echo_base.c \
		cd.c \
		prompt.c \
		check_separator.c \
		pipe.c \
		redir.c \
		basic_function/str2.c \
		basic_function/list.c \
		basic_function/str.c \
		basic_function/str_to_word_tab.c \
		basic_function/get_next_line.c

CFLAGS +=	-W -Wall
CFLAGS +=	-Wextra -pedantic
CFLAGS +=	-I./include

OBJ     = 	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	cc -Wextra -Wall $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
