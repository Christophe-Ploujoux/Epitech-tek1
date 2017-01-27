/*
** test0.c for test 0 in /home/ploujo_c
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  2 14:59:19 2014 christophe ploujoux
** Last update Sun Nov 16 10:11:15 2014 Ploujoux Christophe
*/

#include "my.h"

int	my_put_nbr(int nb)
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

int	my_put_nbr_o(unsigned int nb)
{
  if (nb >= 8)
    {
      my_put_nbr_o(nb / 8);
    }
  my_putchar((nb % 8) + 48);
  return (0);
}

int	my_put_nbr_X(unsigned int nb)
{
  if (nb >= 16)
    {
      my_put_nbr_X(nb / 16);
    }
  if (nb % 16 == 15)
    my_putchar('F');
  else if (nb % 16 == 14)
    my_putchar('E');
  else if (nb % 16 == 13)
    my_putchar('D');
  else if (nb % 16 == 12)
    my_putchar('C');
  else if (nb % 16 == 11)
    my_putchar('B');
  else if (nb % 16 == 10)
    my_putchar('A');
  else
    my_putchar((nb % 16) + 48);
  return (0);
}

int	my_put_nbr_x(unsigned int nb)
{
  if (nb >= 16)
    {
      my_put_nbr_x(nb / 16);
    }
  if (nb % 16 == 15)
    my_putchar('f');
  else if (nb % 16 == 14)
    my_putchar('e');
  else if (nb % 16 == 13)
    my_putchar('d');
  else if (nb % 16 == 12)
    my_putchar('c');
  else if (nb % 16 == 11)
    my_putchar('b');
  else if (nb % 16 == 10)
    my_putchar('a');
  else
    my_putchar((nb % 16) + 48);
  return (0);
}
