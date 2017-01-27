/*
** my_put_nbr.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 18:29:52 2015 Ploujoux Christophe
** Last update Sun May  3 18:29:53 2015 Ploujoux Christophe
*/

#include "header.h"

int	my_put_nbr(int nb)
{
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr(nb = nb * -1);
    }
  else
    {
      my_putchar((nb % 10) + 48);
    }
  return (0);
}
