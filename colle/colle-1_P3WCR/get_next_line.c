/*
** get_next_line.c for my_reader in /home/ploujo_c/rendu/colle-1_P3WCR
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Apr 27 21:30:53 2015 Ploujoux Christophe
** Last update Mon Apr 27 21:31:49 2015 Ploujoux Christophe
*/

#include <stdlib.h>

char	*get_next_line(int fd)
{
  int	a;
  char	buffer;
  int	i;
  char	*str;

  a = 0;
  i = 0;
  if ((str = malloc(sizeof (char) * 200)) == NULL)
    return (NULL);
  while (buffer != '\n')
    {
      if (read(fd, &buffer, 1) <= 0)
	return (NULL);
      str[i] = buffer;
      i++;
    }
  return (str);
}
