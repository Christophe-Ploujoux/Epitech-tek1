##
## Makefile for make in /home/ploujo_c/rendu/colle-1_P3WCR
##
## Made by Ploujoux Christophe
## Login   <ploujo_c@epitech.net>
##
## Started on  Mon Apr 27 19:06:35 2015 Ploujoux Christophe
## Last update Mon Apr 27 21:32:06 2015 Ploujoux Christophe
##

RM= rm -f

CC= gcc

NAME= my_reader

# CFLAGS= -Wall -Wextra -Werror
# CFLAGS= -ansi -pedantic
# CFLAGS= -I.

SRCS=   main.c \
	base.c \
	my_put_nbr.c \
	aff.c \
	get_next_line.c

OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(OBJS)

re: fclean all
