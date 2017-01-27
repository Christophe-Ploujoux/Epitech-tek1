##
## Makefile for my_ls in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
## 
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
## 
## Started on  Thu Nov 27 11:58:32 2014 Ploujoux Christophe
## Last update Sun Dec 14 15:46:42 2014 Ploujoux Christophe
##

RM      = rm -f

NAME    = push_swap

SRC     = main.c \
	my_getnbr.c \
	list.c \
	list2.c \
	swap.c \
	push.c \
	rotate.c \
	sort.c \
	my_check.c

OBJ     = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc -Wextra -Wall -g $(OBJ) -L./lib/ -o $(NAME) -lmy

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
