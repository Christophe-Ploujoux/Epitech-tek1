/*
** my_strcpy.c for my_strcpy in /home/ploujo_c/rendu/Piscine_C_J06/ex_01
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Oct  6 19:41:57 2014 christophe ploujoux
** Last update Thu Apr  9 18:41:11 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/asm.h"

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  return (dest);
}

char	*my_strdup(char *src)
{
  int	length;
  char	*str;

  length = my_strlen(src);
  str = malloc(length);
  my_strcpy(str, src);
  return (str);
}
