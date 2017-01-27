##
## Makefile for my_ls in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Thu Nov 27 11:58:32 2014 Ploujoux Christophe
## Last update Sat Jan 17 14:35:04 2015 Ploujoux Christophe
##

RM      = rm -f

NAME    = bsq

SRC     = 	main.c \
		get_next_line.c \
		str.c \
		function.c \
		bsq.c \
		tab.c

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc -Wextra -Wall $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
