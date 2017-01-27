/*
** str.c for str in /home/ploujo_c/rendu/unix/PSU_2014_my_select
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan  7 14:20:18 2015 Ploujoux Christophe
** Last update Sun Jan 11 12:58:04 2015 Ploujoux Christophe
*/

#include "include/my.h"

int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_putchr(int c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
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
