/*
** my_strcmp.c for my_strcmp in /home/ploujo_c/rendu/Piscine_C_J07/lib/my
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct  8 00:08:49 2014 christophe ploujoux
** Last update Sun Jan  4 17:45:42 2015 Ploujoux Christophe
*/

#include "my.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  if ((k = jump_space(s1, k)) == -1)
    return (-1);
  while (s1[i] !='\0' && s2[i] != '\0' && i <= n)
    {
      i++;
    }
  while (j < i)
    {
      if (s1[k] != s2[j])
	{
	  return (s1[k] - s2[j]);
	}
      k++;
      j++;
    }
  return (0);
}
