/*
** str.c for str in /home/reiatu_t/Rendu/colle-4-BA67
**
** Made by teimanu reiatua
** Login   <reiatu_t@epitech.net>
**
** Started on  Mon May 18 19:16:13 2015 teimanu reiatua
** Last update Mon May 18 22:14:23 2015 christophe ploujoux
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (s1[i] == s2[i] && s1[i])
    i++;
  return (s1[i] - s2[i]);
}

char	*my_strdup(char *src)
{
  char	*dest;

  if ((dest = malloc(sizeof(char) * my_strlen(src))) == NULL)
    exit(0);
  dest = my_strcpy(dest, src);
  return (dest);
}
