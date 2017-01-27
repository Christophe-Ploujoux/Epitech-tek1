/*
** bsq.c for bsq in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 21:51:25 2015 Ploujoux Christophe
** Last update Fri Jan 16 14:00:05 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int max = 0;
int x = 0;
int y = 0;

int	loop(char **tab, int **ptr)
{
  int	i;
  int	j;

  i = 0;
  while (tab[i])
    {
      if ((ptr[i] = malloc(my_strlen(tab[i]) * sizeof(int))) == NULL)
	return (-1);
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == 'o')
	    ptr[i][j] = 0;
	  else if (i == 0 || j == 0)
	    ptr[i][j] = 1;
	  else
	    ptr[i][j] = min_int(ptr[i][j - 1], ptr[i - 1][j], ptr[i - 1][j - 1]) + 1;
	  if (ptr[i][j] > ptr[i][j -1] && max < ptr[i][j])
	    max = ptr[i][j];
	  j++;
	}
      i++;
    }
  return (0);
}

int	**init_ptr(char **tab)
{
  int	i;
  int	j;
  int	lin;
  int	**ptr;

  j = 0;
  i = 0;
  lin = lin_number(tab);
  if ((ptr = malloc(lin * sizeof(int *))) == NULL)
    return (NULL);
  if (loop(tab, ptr) == -1)
    return (NULL);
  return (ptr);
}

int	find_pos(char **tab, int **ptr)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (ptr[i][j] == max)
	    {
	      x = j + 1;
	      y = i + 1;
	      return (1);
	    }
	  j++;
	}
      i++;
    }
}

char	**bsq(char **tab)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if ((i < y && i >= y - max) && (j < x && j >= x - max))
	    tab[i][j] = 'x';
	  j++;
	}
      i++;
    }
  return (tab);
}
