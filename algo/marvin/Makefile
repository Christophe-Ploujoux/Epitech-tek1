##
## Makefile for Makefile in 
## 
## Made by Sebastien BOULOC
## Login   <bouloc_s@epitech.net>
## 
## Started on  Fri Jan  2 20:09:14 2015 Sebastien BOULOC
## Last update Sun Jan  4 17:08:39 2015 Ploujoux Christophe
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -W -Wextra -Wall -Werror
CFLAGS	+= -ansi -pedantic
CFLAGS	+= -I./include/

NAME	= marvin

LIBSRCS	= ./lib/my/my_putchar.c \
	  ./lib/my/my_putstr.c \
	  ./lib/my/my_strlen.c \
	  ./lib/my/my_strncmp.c

SRCS	= main.c \
	  my_check.c \
	  marvin.c \
	  init_list.c \
	  pars_arg.c \
	  variable.c \
	  function.c \
	  case.c \
	  free_list.c

LIBOBJS	= $(LIBSRCS:.c=.o)

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(LIBOBJS) $(OBJS)
	ar rc ./lib/libmy.a $(LIBOBJS)
	ranlib ./lib/libmy.a
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS) -L./lib/ -lmy

clean:
	$(RM) $(OBJS) $(LIBOBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
