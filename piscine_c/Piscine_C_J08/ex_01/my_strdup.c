/*
** my_strdup.c for strdup in /home/ploujo_c/rendu/Piscine_C_J08/ex_01
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  9 09:35:39 2014 christophe ploujoux
** Last update Thu Oct  9 17:54:22 2014 christophe ploujoux
*/
#include <stdlib.h>

char	*my_strdup(char *src)
{
  int	length;
  char	*str;

  length = my_strlen(src);
  str = malloc(length);
  my_strcpy(str, src);
  return (str);
}
