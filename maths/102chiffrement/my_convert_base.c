/*
** my_convert_base.c for my_convert_base in /home/ploujo_c/rendu
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Nov 20 12:06:45 2014 Ploujoux Christophe
** Last update Thu Nov 27 17:14:46 2014 Ploujoux Christophe
*/

#include<stdlib.h>
#include "include/my.h"

char	*convert_base(char *nbr, char *base_from, char *base_to)
{
  char	*res;
  int	nb;
  int	i;
  int	neg;

  res = malloc(sizeof(*res) * 100);
  nb = my_getnbr_base(nbr, base_from);
  neg = 0;
  if (nb < 0 && (neg = 1))
    nb *= -1;
  i = 0;
  do
    {
      res[i] = base_to[nb % my_strlen(base_to)];
      nb /= my_strlen(base_to);
      i++;
    } while (nb > 0);
  if (neg == 1)
    {
      res[i] = '-';
      i++;
    }
  res[i] = '\0';
  res = my_revstr(res);
  return (res);
}
