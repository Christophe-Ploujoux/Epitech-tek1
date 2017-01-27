/*
** tab.c for asm in /home/ploujo_c/rendu/prog-elem/CPE_2014_corewar/asm
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Apr 11 11:19:50 2015 Ploujoux Christophe
** Last update Sun Apr 12 22:25:59 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/asm.h"

void	my_free_tab(char **tab)
{
  int	i;

  i = 0;
  if (tab != NULL)
    {
      while (tab[i] != NULL)
	free(tab[i++]);
      free(tab);
    }
}

void	aff_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}

int	size_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
      i++;
  return (i);
}
