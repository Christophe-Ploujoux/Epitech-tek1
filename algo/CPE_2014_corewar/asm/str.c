/*
** str2.c for str2 in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Jan 27 02:56:37 2015 Ploujoux Christophe
<<<<<<< HEAD
** Last update Sun Apr 12 22:25:45 2015 Ploujoux Christophe
=======
** Last update Thu Apr  9 15:17:00 2015 Ploujoux Christophe
>>>>>>> a6bea7b2e94b72351994f9445e9cd5a606dff329
*/

#include <stdlib.h>
#include <unistd.h>
#include "include/asm.h"

char	*my_revstr(char *str)
{
  char  strc;
  int   i;
  int   j;

  i = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      strc = str[j];
      str[j] = str[i];
      str[i] = strc;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  char	*str;

  i = 0;
  j = 0;
  str = x_malloc(sizeof(str) * (my_strlen(dest) + my_strlen(src)) + 2);
  while (dest[i])
    {
      str[i] = dest[i];
      i++;
    }
  while (src[j])
    {
      str[i] = src[j];
      i++;
      j++;
    }
  str[i] = '\0';
  return (str);
}

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void    my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
