##
## Makefile for libmy in /home/ploujo_c/rendu/Piscine_C_J11/lib/my
## 
## Made by christophe ploujoux
## Login   <ploujo_c@epitech.net>
## 
## Started on  Mon Oct 20 11:03:58 2014 christophe ploujoux
## Last update Mon Oct 20 15:48:17 2014 christophe ploujoux
##

RM	= rm -f

NAME	= libmy.a

SRC	= my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \

OBJ	= $(SRC:.c=.o)

all: $(NAME) libcopy hcopy

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

libcopy:
	 cp libmy.a ..

hcopy:
	cp my.h ../../include

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
