/*
** get_next_line.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Apr 28 15:24:42 2015 Ploujoux Christophe
** Last update Sun May  3 18:53:13 2015 Ploujoux Christophe
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "header.h"

char	*my_realloc(char *old, int size)
{
  int	i;
  char	*new;
  int	len;

  i = 0;
  len = my_strlen(old) + 1;
  if ((new = malloc(sizeof(new) * (len + size))) == NULL)
    return (NULL);
  while (old[i])
    {
      new[i] = old[i];
      i++;
    }
  new[i] = '\0';
  free(old);
  return (new);
}

char	*get_next_line(const int fd)
{
  char	buff;
  int	i;
  int	rd;
  char	*line;

  i = 0;
  if ((rd = read(fd, &buff, 1)) == -1)
    return (NULL);
  if (rd == 0)
    return (NULL);
  while (buff != '\n')
    {
      if (i == 0)
	line = x_malloc(sizeof(line) + 1);
      else
	line = my_realloc(line, 1);
      line[i] = buff;
      line[i + 1] = '\0';
      read(fd, &buff, 1);
      i++;
    }
  line[i] = '\0';
  return (line);
}
