/*
** base.c for base in /home/reiatu_t/Rendu/colle-1_P3WCR
**
** Made by teimanu reiatua
** Login   <reiatu_t@epitech.net>
**
** Started on  Mon Apr 27 19:18:05 2015 teimanu reiatua
** Last update Mon Apr 27 20:28:46 2015 Ploujoux Christophe
*/

#include "reader.h"

void	my_putchar(char c)
{
  (void)write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (1);
  while (str[i])
    i++;
  return (i);
}

int	my_putstr(char *str)
{
  if (str == NULL)
    return (1);
  write(1, str, my_strlen(str));
  return (0);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i])
    {
      if (s1[i] - s2[i] != 0)
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  i = 0;
  while (s1[i] && s2[i] && i < n)
    {
      if (s1[i] - s2[i] != 0)
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}
