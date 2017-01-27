/*
** fonc.c for fonc in /home/ploujo_c/rendu/unix/PSU_2014_my_select
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan  9 15:30:44 2015 Ploujoux Christophe
** Last update Sun Jan 11 12:39:47 2015 Ploujoux Christophe
*/

#include <sys/ioctl.h>
#include <termios.h>
#include <stdlib.h>
#include <term.h>
#include <curses.h>
#include <unistd.h>
#include "include/my.h"

void	curs_re(int word, char *str)
{
  word = my_strlen(str);
  while (word > 0)
    {
      x_tput(tgetstr("le", NULL), 0, my_putchr);
      word--;
    }
}

int	curs_down(int i, int size)
{
  if (i == size - 2)
    {
      while (i > 0)
      {
	x_tput(tgetstr("up", NULL), 0, my_putchr);
	i--;
      }
    i = 0;
    }
  else
    {
      x_tput(tgetstr("do", NULL), 0, my_putchr);
      i++;
    }
  return (i);
}

int	curs_up(int i, int size)
{
  if (i == 0)
    {
      while (i < size - 2)
	{
	  x_tput(tgetstr("do", NULL), 0, my_putchr);
	  i++;
	}
      i = size - 2;
    }
  else
    {
      x_tput(tgetstr("up", NULL), 0, my_putchr);
      i--;
    }
  return (i);
}

void	word_sur(t_list *list, int i, int *sur, char **str)
{
  int	word;

  word = 0;
  if (sur[i] == 0)
    {
      x_tput(tgetstr("us", NULL), 0, my_putchr);
      my_putstr(str[i + 1]);
      x_tput(tgetstr("ue", NULL), 0, my_putchr);
      curs_re(word, str[i + 1]);
      ad_before_racine(list, str[i + 1]);
      sur[i] = 1;
    }
  else
    {
      my_putstr(str[i + 1]);
      curs_re(word, str[i + 1]);
      sur[i] = 0;
    }
}
