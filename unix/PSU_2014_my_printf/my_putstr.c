/*
** my_putnbr.c for my_putnbr in /home/ploujo_c/rendu/Piscine_C_J04
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Oct  3 11:57:11 2014 christophe ploujoux
** Last update Sun Nov 16 22:15:46 2014 Ploujoux Christophe
*/

#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] > 0)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putstr_S(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  if (str[i] <= 7)
	    my_putstr("\\00");
	  else if (str[i] < 32)
	    my_putstr("\\0");
	  else if (str[i] >= 127)
	    my_putstr("\\");
	  my_put_nbr_o(str[i]);
	}
      else
	my_putchar(str[i];)
      i = i + 1;
    }
  return (0);
}
