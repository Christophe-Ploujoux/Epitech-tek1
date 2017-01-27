/*
** pos.c for my_mastermind in /home/ploujo_c/rendu/colle-4-BA67
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May 18 20:49:16 2015 christophe ploujoux
** Last update Mon May 18 20:50:19 2015 christophe ploujoux
*/

#include "my.h"

int	right(char *buffer, t_par par)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (buffer[i])
    {
      if (buffer[i] == par.code[i])
	n++;
      i++;
    }
  return (n);
}

int	wrong_pos(char *buffer, t_par par)
{
  int	i;
  int	j;
  int	n;

  i = 0;
  n = 0;
  while (buffer[i])
    {
      j = 0;
      while (par.code[j])
	{
	  if (buffer[i] == par.code[j] && i != j)
	    n++;
	  j++;
	}
      i++;
    }
  return (n);
}
