/*
** str.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 18:30:26 2015 Ploujoux Christophe
** Last update Sat May 16 12:26:33 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	my_putchar(char c)
{
  if (write(1, &c, 1) < 0)
    return (-1);
  return (0);
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
  dest[i] = '\0';
  return (dest);
}

char	*my_strdup(char *src)
{
  char	*str;

  str = x_malloc(sizeof(char) * (my_strlen(src) + 1));
  my_strcpy(str, src);
  return (str);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (s1[i] !='\0' && s2[i] != '\0')
    {
      i++;
    }
  while (j < i)
    {
      if (s1[j] != s2[j])
	{
	  return (s1[j] - s2[j]);
	}
      j++;
    }
  return (0);
}
