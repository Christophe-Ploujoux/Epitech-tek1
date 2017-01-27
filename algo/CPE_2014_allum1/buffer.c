/*
** buffer.c for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Feb 18 19:05:22 2015 Ploujoux Christophe
** Last update Thu Feb 19 19:48:47 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdlib.h>

char	*prompt()
{
  char	*buffer;
  int	a;

  my_putstr("Your turn [line number, collumn number] :");
  if ((buffer = malloc(sizeof (char) * 42)) == NULL)
    return (NULL);
  if ((a = read(0, buffer, 42)) < 0)
    return (NULL);
  buffer[a - 1] = '\0';
  return (buffer);
}

int	*number(char **buffer)
{
  int	i;
  int	*nb;

  i = 0;
  if ((nb = malloc(sizeof (int) * 2)) == NULL)
    return (NULL);
  while (buffer[i] && i < 2)
    nb[i] = my_get_nbr(buffer[i++]);
  return (nb);
}
