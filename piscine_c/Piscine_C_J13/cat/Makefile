##
## Makefile for libmy in /home/ploujo_c/rendu/Piscine_C_J11/lib/my
## 
## Made by christophe ploujoux
## Login   <ploujo_c@epitech.net>
## 
## Started on  Mon Oct 20 11:03:58 2014 christophe ploujoux
## Last update Thu Oct 23 18:43:56 2014 christophe ploujoux
##

RM	= rm -f

NAME	= cat

SRC	= main.c

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -L../lib/ -o $(NAME) -lmy

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
