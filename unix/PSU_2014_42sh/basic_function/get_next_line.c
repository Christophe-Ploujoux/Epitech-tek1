/*
** get_next_line.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:56:40 2015 Ploujoux Christophe
** Last update Sun May 24 15:56:40 2015 Ploujoux Christophe
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "my.h"

char	*my_realloc(char *old, int size)
{
  int	i;
  char	*new;
  int	len;

  i = 0;
  len = my_strlen(old) + 1;
  if ((new = malloc(sizeof(new) * (len + size + 1))) == NULL)
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
  if ((line = malloc(sizeof(line) + 1)) == NULL)
    return (NULL);
  if ((rd = read(fd, &buff, 1)) <= 0)
    return (NULL);
  while (buff != '\n')
    {
      line = my_realloc(line, 1);
      line[i] = buff;
      read(fd, &buff, 1);
      i++;
    }
  line[i] = '\0';
  return (line);
}
