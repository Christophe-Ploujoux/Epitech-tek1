/*
** str.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:57:08 2015 Ploujoux Christophe
** Last update Sun May 24 15:57:09 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <unistd.h>

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

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return (s1[i] - s2[i]);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;
  int	k;

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
