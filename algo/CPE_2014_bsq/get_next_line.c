/*
** my_get_next_line.c for get_next_line in /home/ploujo_c/rendu/prog-elem
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan 16 10:38:54 2015 Ploujoux Christophe
** Last update Sun Jan 18 19:41:49 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/my.h"

static int	last = 1;
static int	rd;
static int	i;
static char	*res = NULL;
static char	buff[BUFF_SIZE];

char	*my_realloc(char *old, int size)
{
  int	i;
  char	*new;

  i = 0;
  if ((new = malloc(sizeof(*new) * (my_strlen(old) + size))) == NULL)
    return (NULL);
  while (old[i])
    {
      new[i] = old[i];
      i++;
    }
  free(old);
  return (new);
}

char		*get_next_line(const int fd)
{
  if (buff[my_strlen(buff) - rd] == '\0')
    {
      if ((rd = read(fd, buff, BUFF_SIZE)) <= 0)
	{
	  if (last-- != 0 && buff[my_strlen(buff) - rd - 1] != '\n')
	    return (res);
	  else
	    return (NULL);
	}
      buff[rd] = '\0';
    }
  if ((res = (i == 0) ? malloc(sizeof(*res) * BUFF_SIZE + 1) :
       my_realloc(res, sizeof(*res) * BUFF_SIZE + 1)) == NULL)
    return (NULL);
  while (buff[my_strlen(buff) - rd] && buff[my_strlen(buff) - rd] != '\n')
    res[i++] = buff[my_strlen(buff) - rd--];
  res[i] = '\0';
  if (buff[my_strlen(buff) - rd] == '\n')
    {
      i = 0;
      rd--;
      return (res);
    }
  return (get_next_line(fd));
}
