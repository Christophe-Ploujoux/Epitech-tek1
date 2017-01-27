/*
** my_put_nbr_base.c for my_put_nbr_base in /home/ploujo_c/rendu/l_h_M_functions
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov  7 12:02:17 2014 Ploujoux Christophe
** Last update Wed Nov 26 13:17:50 2014 Ploujoux Christophe
*/

#include "include/my.h"

int	my_put_nbr_base(int nb, char *base)
{
  int	i;
  int	length;
  int	nb_len;

  nb_len = 0;
  if (nb < 0)
    {
      nb = -nb;
      nb_len = nb_len + 1;
    }
  length = my_strlen(base);
  i = nb % length;
  nb = nb / length;
  if (nb > 0)
    my_put_nbr_base(nb, base);
  my_putchar(base[i]);
  nb_len += 1;
  return (length);
}
