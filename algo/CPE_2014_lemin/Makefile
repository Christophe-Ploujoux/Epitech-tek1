##
## Makefile for Makefile in /home/perina_e/printf/my_printf/my_printfinal
## 
## Made by eric perina
## Login   <perina_e@epitech.net>
## 
## Started on  Sun Nov 16 19:48:23 2014 eric perina
## Last update Sun May  3 19:05:21 2015 Ploujoux Christophe
##

SRC	= parser.c \
	get_next_line.c \
	main.c \
	utils.c \
	djikstra.c \
	link_coord.c \
	basic_function/str.c \
	basic_function/my_putstr.c \
	basic_function/my_put_nbr.c \
	basic_function/my_get_nbr.c \
	basic_function/my_str_isnum.c \
	basic_function/strtok.c \
	basic_function/x_malloc.c

NAME	= lem_in

CC	= gcc

CFLAGS += -Wall -pedantic -W
CFLAGS += -I./include

RM	= rm -f

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm $(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
