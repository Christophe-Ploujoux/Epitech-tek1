##
## Makefile for my_ls in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Thu Nov 27 11:58:32 2014 Ploujoux Christophe
## Last update Sun Nov 30 13:11:39 2014 Ploujoux Christophe
##

RM      = rm -f

NAME    = my_ls

SRC     = my_ls.c \
	my_strlen.c \
	my_display.c \
	my_display2.c \
	main.c 

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -L./lib/ -o $(NAME) -lmy

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

