/*
** codage.c for asm in /home/ploujo_c/rendu/prog-elem/CPE_2014_corewar/asm
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Apr 11 11:20:57 2015 Ploujoux Christophe
** Last update Sun Apr 12 22:25:15 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/asm.h"

char	*descrip_loop(char *pars, int i, char **tab)
{
  int	j;

  j = 0;
  while (tab[i][j])
    {
      if (tab[i][j] == 'r')
	{
	  pars = my_strcat(pars, "01 ");
	  return (pars);
	}
      else if (tab[i][j] == '%')
	{
	  pars = my_strcat(pars, "10 ");
	  return (pars);
	}
      else
	{
	  pars = my_strcat(pars, "11 ");
	  return (pars);
	}
      j++;
    }
  return (NULL);
}

char	*par(char **tab)
{
  int	i;
  char	*pars;

  i = 0;
  pars = x_malloc(sizeof (char) * 2 + 1);
  while (tab[i])
    {
      pars = descrip_loop(pars, i, tab);
      i++;
    }
  while (i < 4)
    {
      pars = my_strcat(pars, "00 ");
      i++;
    }
  return (pars);
}
