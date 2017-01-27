/*
** int_char.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Feb 28 19:54:49 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:11:54 2015 Ploujoux Christophe
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

int	int_size(int nb)
{
  int	i;

  i = 0;
  while (nb / 10 != 0)
    {
      i++;
      nb = nb / 10;
    }
  i = i + 2;
  return (i);
}

char	*int_to_string(int nb)
{
  char	*str;
  int	i;
  int	d;
  int	q;

  d = 1;
  i = 0;
  while (nb / d >= 10)
    d = d * 10;
  str = my_xmalloc(sizeof (char) * int_size(nb));
  while (d > 0)
    {
      q = nb / d;
      nb = nb % d;
      d = d / 10;
      str[i] = q + '0';
      i++;
    }
  str[i] = '\0';
  return (str);
}
