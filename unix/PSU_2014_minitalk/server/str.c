/*
** str.c for str in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 14:32:31 2015 Ploujoux Christophe
** Last update Wed Mar 18 21:31:53 2015 Ploujoux Christophe
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

char	*my_revstr(char *str)
{
  int	n;
  int	a;
  char	swap;

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
