/*
** my_getnbr_base.c for my_getnbr_base in /home/ploujo_c/rendu/l_h_M_functions
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Nov 20 14:35:44 2014 Ploujoux Christophe
** Last update Wed Nov 26 12:30:24 2014 Ploujoux Christophe
*/

#include "include/my.h"

int	find_pos(char c, char *str)
{
  int	i;

  for (i = 0; str[i]; i++)
    {
      if (str[i] == c)
	return (i);
    }
  return (0);
}

int	my_getnbr_base(char *str, char *base)
{
  int	nb;
  int	i;
  int	fac;

  nb = 0;
  fac = 1;
  if (str[0] == '-')
    return (-my_getnbr_base(&str[1], base));
  i = my_strlen(str) - 1;
  while (i >= 0)
    {
      nb = nb + find_pos(str[i], base) * fac;
      fac *= my_strlen(base);
      i = i - 1;
    }
  return (nb);
}
