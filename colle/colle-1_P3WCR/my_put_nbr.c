/*
** my_put_nbr.c for my_reader in /home/ploujo_c/rendu/colle-1_P3WCR
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Apr 27 21:08:00 2015 Ploujoux Christophe
** Last update Mon Apr 27 21:16:07 2015 Ploujoux Christophe
*/

#include "reader.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}

int	count_space(char *str)
{
  int	i;

  i = 0;
  while (str[i] == ' ' || str[i] == '\t')
    i++;
  return (i);
}
