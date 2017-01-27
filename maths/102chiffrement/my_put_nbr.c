/*
** test0.c for test 0 in /home/ploujo_c
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  2 14:59:19 2014 christophe ploujoux
** Last update Wed Nov 26 09:38:17 2014 Ploujoux Christophe
*/

#include "include/my.h"

void	my_put_nbr(int  nb)
{
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
      my_put_nbr(nb / 10);
    }
  my_putchar ((nb % 10) + 48);
}

