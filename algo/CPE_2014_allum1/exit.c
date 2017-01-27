/*
** exit.c for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1/CPE_2014_allum1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Feb 19 10:39:52 2015 Ploujoux Christophe
** Last update Thu Feb 19 10:44:32 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdlib.h>

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    free(tab[i++]);
  free(tab);
}

void	my_exit(char **buffer, char **al, int *nb)
{
  free_tab(buffer);
  free_tab(al);
  free(nb);
  exit(0);
}
