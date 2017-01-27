/*
** tab.c for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Feb 17 15:57:07 2015 Ploujoux Christophe
** Last update Thu Feb 19 19:47:33 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdlib.h>

void	aff_tab(char **tab)
{
  int	i;

  i = 0;
  my_putchar('\n');
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putstr(" = ");
      my_put_nbr(i + 1);
      my_putchar('\n');
      i++;
    }
  my_putchar('\n');
}

char	**tab(char **tab, int size)
{
  int	i;
  int	j;

  i = 0;
  if ((tab = malloc(sizeof (char *) * (size + 1))) == NULL)
    return (NULL);
  while (i < size)
    {
      j = 0;
      if ((tab[i] = malloc(sizeof (char) * (size * 2))) == NULL)
	return (NULL);
      while (j < (size * 2) - 1)
	{
	  if (j <= size - 1 + i && j >= size - 1 - i)
	    tab[i][j] = '|';
	  else
	    tab[i][j] = ' ';
	  j++;
	}
      tab[i][j] = '\0';
      i++;
    }
  tab[i] = NULL;
  return (tab);
}

char	**tab_modif(char **tab, int line, int col)
{
  int	i;

  i = 0;
  while (tab[line - 1][i] == ' ')
    i++;
  col = col + i;
  while (i < col)
    tab[line - 1][i++] = ' ';
  return (tab);
}

int	tab_count(char **tab)
{
  int	i;
  int	j;
  int	nb;

  i = 0;
  nb = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == '|')
	    nb++;
	  j++;
	}
      i++;
    }
  return (nb);
}
