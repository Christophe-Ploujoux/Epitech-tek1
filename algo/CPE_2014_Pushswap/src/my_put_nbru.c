/*
** my_put_nbru.c for my_put_nbru.c in /home/ploujo_c/rendu/unix/PSU_2014_my_printf
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 14 19:30:27 2014 Ploujoux Christophe
** Last update Sat Nov 15 18:35:12 2014 Ploujoux Christophe
*/

#include "my.h"

int	my_put_nbr_u(unsigned int nb)
{
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar((nb % 10) + 48);
  return (0);
}

int	my_put_nbr_b(unsigned int nb)
{
  if (nb >= 2)
    {
      my_put_nbr_b(nb / 2);
    }
  my_putchar((nb % 2) + 48);
  return (0);
}

int	my_put_nbr_s(signed int nb)
{
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  if (nb <= -10)
    {
      my_putchar('-');
      nb = -nb;
      my_put_nbr(nb / 10);
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      my_putchar((nb % 10) + 48);
    }
  else
    my_putchar((nb % 10) + 48);
  return (0);
}
