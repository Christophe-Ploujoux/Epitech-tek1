/*
x** main.c for main in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 14:25:41 2015 Ploujoux Christophe
** Last update Sat Jan 17 14:47:55 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

void	show_char(char **tab)
{
  int	i;
  int	j;

  i = 0;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  my_putchar(tab[i][j]);
	  j++;
	}
      my_putchar('\n');
      i++;
    }
}

int	main(int argc, char **argv)
{
  char	**tab;
  int	**ptr;

  if (argc != 2)
    return (-1);
  if ((tab = save_tab(argv)) == NULL)
    {
      free(tab);
      return (-1);
    }
  if ((ptr = init_ptr(tab)) == NULL)
    {
      free_tab_int(tab, ptr);
      free_tab_char(tab);
      return (-1);
    }
  find_pos(tab, ptr);
  tab = bsq(tab);
  show_char(tab);
  free_tab_int(tab, ptr);
  free_tab_char(tab);
  return (0);
}
