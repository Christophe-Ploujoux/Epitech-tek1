##
## Makefile for libmy in /home/ploujo_c/rendu/Piscine_C_J11/lib/my
## 
## Made by christophe ploujoux
## Login   <ploujo_c@epitech.net>
## 
## Started on  Mon Oct 20 11:03:58 2014 christophe ploujoux
## Last update Sun Nov 16 18:57:42 2014 Ploujoux Christophe
##

RM	= rm -f

NAME	= libmy.a

SRC	= my_putchar.c \
	my_put_nbr.c \
	my_put_nbru.c \
	my_putstr.c \
	flag1.c \
	flag2.c \
	flag3.c \
	my_printf.c \
	my_strcpy.c


OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):  $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
