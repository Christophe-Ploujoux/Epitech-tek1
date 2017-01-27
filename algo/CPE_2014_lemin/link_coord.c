/*
** link.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri May  1 18:33:44 2015 Ploujoux Christophe
** Last update Sat May  2 16:40:43 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "header.h"

int	alloc_link(char **tab)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (tab[i])
    {
      if (my_str_islink(tab[i]) == 0)
	n++;
      i++;
    }
  return (n);
}

int	alloc_coord(char **tab)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (tab[i])
    {
      if (my_str_isnum(tab[i]) == 0)
	n++;
      i++;
    }
  return (n);
}

char    **my_link(char **tab)
{
  char	**link;
  int	i;
  int	k;

  i = 0;
  k = 1;
  link = x_malloc(sizeof(char *) * (alloc_link(tab) + 1));
  while (tab[k])
    {
      if (my_str_islink(tab[k]) == 0)
	{
	  link[i] = my_strdup(tab[k]);
	  i++;
	}
      k++;
    }
  link[i] = NULL;
  return (link);
}

char	**my_coord(char **tab)
{
  char	**coord;
  int	i;
  int	k;

  i = 0;
  k = 1;
  coord = x_malloc(sizeof(char *) * (alloc_coord(tab) + 1));
  while (tab[k])
    {
      if (my_str_isnum(tab[k]) == 0)
	{
	  coord[i] = my_strdup(tab[k]);
	  i++;
	}
      k++;
    }
  coord[i] = NULL;
  return (coord);
}
