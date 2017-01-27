/*
** main.c for main in /home/ploujo_c/rendu/unix/PSU_2014_my_select
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Dec 29 17:06:22 2014 Ploujoux Christophe
** Last update Sun Jan 11 12:38:14 2015 Ploujoux Christophe
*/

#include <sys/ioctl.h>
#include <termios.h>
#include <stdlib.h>
#include <term.h>
#include <curses.h>
#include <unistd.h>
#include "include/my.h"

int	raw_mode(struct termios *term)
{
  term->c_lflag &= ~(ICANON);
  term->c_lflag &= ~(ECHO);
  term->c_cc[VMIN] = 1;
  term->c_cc[VTIME] = 0;
  if (tcsetattr(0, TCSANOW, term) < 0)
    return (-1);
}

int			main(int argc, char **argv, char **env)
{
  char			*term;
  struct termios	new;
  struct termios	old;
  int			i;
  t_list		*list;

  list = init_list();
  i = 1;
  if (argc == 1)
    return (-1);
  if (tcgetattr(0, &new) < 0)
    return (-1);
  old = new;
  clear_term(env);
  raw_mode(&new);
  show_params(argc, argv);
  x_tput(tgoto(tgetstr("cm", NULL), 0, 0), 0, my_putchr);
  if (my_keys(argc, argv, env) == 1)
    if (tcsetattr(0, TCSANOW, &old) == -1)
      return (-1);
  return (0);
}
