/*
** tab.c for tab in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Jan 15 15:13:31 2015 Ploujoux Christophe
** Last update Sun Jan 18 19:32:34 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

char	**save_tab(char **argv)
{
  char	*str;
  char	**tab;
  int	i;
  int	fd;
  int	size;
  int	size_check;

  if ((fd = open(argv[1], O_RDONLY)) == -1)
    return (NULL);
  if ((str = get_next_line(fd)) == NULL)
    return (NULL);
  size = my_getnbr(str);
  free(str);
  i = 0;
  if ((tab = malloc((size + 1) * sizeof(*tab))) == NULL)
    return (NULL);
  while (str = get_next_line(fd))
    tab[i++] = str;
  if (i != size)
    {
      my_putstr("Number of line is not correct\n");
      return (NULL);
    }
  close(fd);
  return (tab);
}
