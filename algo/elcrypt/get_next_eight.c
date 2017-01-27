/*
** get_next_eight.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Mar  1 18:38:17 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:11:38 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include/my.h"

char	*padding(char *str)
{
  while (my_strlen(str) < 8)
    str = my_strcat_unfree(str, " ");
  return (str);
}

char		*get_next_eight(const int fd)
{
  int		rd;
  char		*buffer;

  buffer = my_xmalloc(sizeof (char) * 9);
  rd = read(fd, buffer, 8);
  if (rd == 0)
    return (NULL);
  buffer = padding(buffer);
  buffer[8] = '\0';
  return (buffer);
}
