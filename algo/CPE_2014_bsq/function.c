/*
** str2.c for str2 in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 19:13:16 2015 Ploujoux Christophe
** Last update Thu Jan 15 14:16:00 2015 Ploujoux Christophe
*/

#include "include/my.h"

int	col_number(char **tab)
{
  int	col;

  col = my_strlen(tab[0]);
  return (col);
}

void	free_tab_char(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}

void	free_tab_int(char **tab, int **ptr)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      free(ptr[i]);
      i++;
    }
  free(ptr);
}

int	lin_number(char **tab)
{
  int	lin;

  lin = 0;
  while (tab[lin])
    lin++;
  return (lin);
}

int	min_int(int i, int j, int k)
{
  if (i <= j && i <= k)
    return (i);
  if (j <= i && j <= k)
    return (j);
  if (k <= i && k <= j)
    return (k);
}
