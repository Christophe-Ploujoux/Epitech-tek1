/*
** my_getnbr.c for my_mastermind in /home/ploujo_c/rendu/colle-4-BA67
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May 18 20:28:27 2015 christophe ploujoux
** Last update Mon May 18 22:14:28 2015 christophe ploujoux
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

unsigned int	getnbr(char *str)
{
  int		i;
  unsigned int	nb;

  i = 0;
  nb = 0;
  if (str == NULL)
    return (-1);
  while (str[i] && (str[i] >= '0' || str[i] <= '9'))
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb);
}

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
