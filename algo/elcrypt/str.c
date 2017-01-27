/*
** str.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Feb 28 16:57:56 2015 Ploujoux Christophe
** Last update Sun Mar  1 20:36:45 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

int	my_strlen(char	*str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   j;
  char  *str;

  i = 0;
  j = 0;
  if ((str = malloc(sizeof (char) * (my_strlen(dest) + my_strlen(src) + 1)))
      == NULL)
    return (NULL);
  while (dest[i])
    {
      str[i] = dest[i];
      i++;
    }
  while (src[j])
    str[i++] = src[j++];
  str[i] = '\0';
  free(src);
  return (str);
}

char    *my_strcat_unfree(char *dest, char *src)
{
  int   i;
  int   j;
  char  *str;

  i = 0;
  j = 0;
  if ((str = malloc(sizeof (char) * (my_strlen(dest) + my_strlen(src) + 1)))
      == NULL)
    return (NULL);
  while (dest[i])
    {
      str[i] = dest[i];
      i++;
    }
  while (src[j])
    str[i++] = src[j++];
  str[i] = '\0';
  return (str);
}

char    *my_revstr(char *str)
{
  int   n;
  int   a;
  char  swap;

  n = 0;
  a = 0;
  while (str[n] != '\0')
    {
      n = n + 1;
    }
  n = n - 1;
  while (a < n)
    {
      swap = str[n];
      str[n] = str[a];
      str[a] = swap;
      a = a + 1;
      n = n - 1;
    }
  return (str);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] < s2[i])
	return (-1);
      if (s1[i] > s2[i])
	return (1);
      i++;
    }
  return (0);
}
