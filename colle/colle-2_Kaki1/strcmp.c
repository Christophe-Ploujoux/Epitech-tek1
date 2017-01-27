/*
** strcmp.c for opt_get in /home/ploujo_c/rendu/colle-2_Kaki1
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May  4 20:39:46 2015 christophe ploujoux
** Last update Mon May  4 21:04:11 2015 christophe ploujoux
*/

#include <stdlib.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] || s2[i])
    {
      if (s1[i] - s2[i] != 0)
	return (-1);
      i++;
    }
  return (0);
}
