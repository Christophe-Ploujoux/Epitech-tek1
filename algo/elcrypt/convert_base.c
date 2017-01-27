/*
** convert_base.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Feb 28 20:14:18 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:10:23 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

int     find_pos(char c, char *str)
{
  int   i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] == c)
        return (i);
    }
  return (0);
}

int     my_getnbr_base(char *str, char *base)
{
  int   nb;
  int   i;
  int   fac;

  nb = 0;
  fac = 1;
  i = my_strlen(str) - 1;
  while (i >= 0)
    {
      nb = nb + find_pos(str[i], base) * fac;
      fac = fac * my_strlen(base);
      i = i - 1;
    }
  return (nb);
}

char    *convert_base(char *nbr, char *base_from, char *base_to)
{
  char  *res;
  int   nb;
  int   i;
  int   neg;

  res = my_xmalloc(sizeof(*res) * 100);
  nb = my_getnbr_base(nbr, base_from);
  neg = 0;
  if (nb < 0 && (neg = 1))
    nb *= -1;
  i = 0;
  while (nb > 0)
    {
      res[i] = base_to[nb % my_strlen(base_to)];
      nb = nb / my_strlen(base_to);
      i++;
    }
  if (neg == 1)
    {
      res[i] = '-';
      i++;
    }
  res[i] = '\0';
  res = my_revstr(res);
  return (res);
}
