/*
** mastermind.c for my_mastermind in /home/ploujo_c/rendu/colle-4-BA67
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May 18 21:03:22 2015 christophe ploujoux
** Last update Mon May 18 22:26:53 2015 christophe ploujoux
*/

#include <stdlib.h>
#include "my.h"

void	aff(t_res res, int type, int i)
{
  if (type == 1)
    {
      my_putstr("Pions bien places : ");
      my_put_nbr(res.yes);
      my_putstr("\nPions mal places : ");
      my_put_nbr(res.no);
      my_putchar('\n');
    }
  else
    {
      my_putstr("--\nRound ");
      my_put_nbr(i + 1);
      my_putchar('\n');
      my_putstr(">");
    }
}

int	str_match(char *src, char *buffer)
{
  int	i;
  int	j;

  i = 0;
  while (buffer[i])
    {
      j = 0;
	while (buffer[i] != src[j])
	  j++;
      if (j > my_strlen(src) - 1)
	return (-1);
      i++;
    }
  return (0);
}

int	mastermind(t_par par, t_res res)
{
  char	*buffer;
  int	i;

  i = 0;
  my_putstr("\nTrouverez-vous les code secret?\n");
  while (i < par.try)
    {
      aff(res, 0, i);
      buffer = recup_buffer();
      if (my_strcmp(par.code, buffer) == 0)
      	return (0);
      if (str_match(par.charpion, buffer) == -1 ||
      	  my_strlen(buffer) != my_strlen(par.code))
      	my_putstr("Mais tu fait quoi gros noob\n");
      else
      	{
      	  res.yes = right(buffer, par);
      	  res.no = wrong_pos(buffer, par);
      	  aff(res, 1, i);
      	  res = init_res();
      	  i++;
      	}
    }
  return (1);
}
