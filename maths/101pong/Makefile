##
## Makefile for libmy in /home/ploujo_c/rendu/Piscine_C_J11/lib/my
## 
## Made by christophe ploujoux
## Login   <ploujo_c@epitech.net>
## 
## Started on  Mon Oct 20 11:03:58 2014 christophe ploujoux
## Last update Wed Nov 12 18:45:23 2014 Ploujoux Christophe
##

RM	= rm -f

NAME	= 101pong

SRC	= 101pong.c \
	my_getnbr.c \
	my_str_isnum.c

all: $(NAME)

$(NAME):
	cc -Wall -Werror -Wextra -pedantic -ansi $(SRC) -o $(NAME) -lm

clean:
	$(RM) $(NAME)

re: clean all
