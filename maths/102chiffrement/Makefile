##
## Makefile for Makefile in /home/rieux-_t/Documents/rendu/102chiffrement
## 
## Made by thomas rieux-laucat
## Login   <rieux-_t@epitech.net>
## 
## Started on  Wed Nov 19 02:02:04 2014 thomas rieux-laucat
## Last update Sun Nov 30 16:35:57 2014 Ploujoux Christophe
##

SRC	= main.c \
	  my_error.c \
	  my_alpha_to_int.c \
	  my_crypt.c \
	  my_put_nbr_base.c \
	  my_put_nbr.c \
	  my_getnbr.c \
	  my_str_isnum.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_convert_base.c \
	  my_getnbr_base.c \
	  my_putchar.c \
	  my_decrypt.c \
	  my_revstr.c \
	  pars_decrypt.c	

CC	= cc

RM	= rm -rf

CFLAGS	= -Wall -Wextra -pedantic -ansi

NAME	= 102chiffrement

OBJS	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
