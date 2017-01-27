/*
** str.c for str in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 14:32:31 2015 Ploujoux Christophe
** Last update Thu Jan 29 15:12:57 2015 Ploujoux Christophe
*/

#include <stdlib.h>

int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    {
      my_putstr("Erreur\n");
      exit (-1);
    }
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
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

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return (s1[i] - s2[i]);
}

int     my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  int   j;
  int   k;

  i = 0;
  j = 0;
  k = 0;
  while (s1[i] && s2[i] && i <= n)
    i++;
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
