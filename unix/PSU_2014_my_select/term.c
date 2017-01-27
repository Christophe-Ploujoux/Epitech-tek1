/*
 ** term.c for term in /home/ploujo_c/rendu/unix/PSU_2014_my_select
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan  7 19:47:06 2015 Ploujoux Christophe
** Last update Sun Jan 11 13:04:49 2015 Ploujoux Christophe
*/

#include <sys/ioctl.h>
#include <termios.h>
#include <stdlib.h>
#include <term.h>
#include <curses.h>
#include <unistd.h>
#include "include/my.h"

char	*get_env(char **env, char *name)
{
  int	i;
  char	*ptr;

  i = 0;
  if (env == NULL)
    return (NULL);
  while (env[i])
    {
      if (my_strncmp(env[i], name, my_strlen(name)) == 0)
	return (env[i] + my_strlen(name));
      i++;
    }
  return (NULL);
}

int	clear_term(char **env)
{
  char	*term_name;

  term_name = get_env(env, "TERM=");
  if (term_name == NULL)
    term_name = "xterm";
  if (tgetent(0, term_name) < 0)
    {
      my_putstr("This term does not exist\n");
      return (-1);
    }
  x_tput(tgetstr("cl", NULL), 0, my_putchr);
}

int	exit_sel(t_list *list, char *buffer, char **env)
{
  if (buffer[0] == 10)
    {
      clear_term(env);
      my_show_list(list);
      free_list(list);
      return (1);
    }
  if (buffer[0] == 27 && buffer[1] != 91)
    {
      clear_term(env);
      return (1);
    }
  return (0);
}

int		del_elem(char *buffer)
{
  static int	i;

  if (buffer[0] == 127 ||
      buffer[0] == 27 && buffer[1] == 91 && buffer[2] == 51)
    {
      x_tput(tgetstr("dl", NULL), 0, my_putchr);
      i++;
    }
  return (i);
}

int		my_keys(int size, char **str, char **env)
{
  int		i;
  char		buffer[5];
  int		*sur;
  t_list	*list;

  i = 0;
  sur = init_tab(size, sur);
  list = init_list();
  while (1)
    {
      init_buffer(buffer);
      if (read(0, &buffer, 3) == 0)
	return (1);
      if (buffer[0] == 27 && buffer[1] == 91 && buffer[2] == 65)
	i = curs_up(i, size);
      else if (buffer[0] == 27 && buffer[1] == 91 && buffer[2] == 66)
	i = curs_down(i, size);
      else if (buffer[0] == 32)
	word_sur(list, i, sur, str);
      else if (exit_sel(list, buffer, env) == 1)
	return (1);
      if (del_elem(buffer) == size - 1)
	return (1);
    }
  return (0);
}
