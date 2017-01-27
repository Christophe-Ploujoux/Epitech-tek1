/*
** my_getnbr_base.c for server in /home/ploujo_c/rendu/unix/PSU_2014_minitalk/server
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Mar 18 20:51:12 2015 Ploujoux Christophe
** Last update Wed Mar 18 20:54:50 2015 Ploujoux Christophe
*/

#include "include/my.h"

int	find_pos(char c, char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
        return (i);
      i++;
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
  i = my_strlen(str) - 1;
  while (i >= 0)
    {
      nb = nb + find_pos(str[i], base) * fac;
      fac = fac * my_strlen(base);
      i = i - 1;
    }
  return (nb);
}
