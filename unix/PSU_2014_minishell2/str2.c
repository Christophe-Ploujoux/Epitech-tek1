/*
** str2.c for str2 in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Jan 27 02:56:37 2015 Ploujoux Christophe
** Last update Sun Mar 15 21:27:57 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdlib.h>

void	my_free_tab(char **tab)
{
  int	i;

  i = 0;
  if (tab != NULL)
    {
      while (tab[i] != NULL)
	free(tab[i++]);
      free(tab);
    }
}

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  char	*str;

  i = 0;
  j = 0;
  str = x_malloc(sizeof(str) * (my_strlen(dest) + my_strlen(src) + 1));
  while (dest[i])
    {
      str[i] = dest[i];
      i++;
    }
  str[i++] = '/';
  while (src[j])
    {
      str[i] = src[j];
      i++;
      j++;
    }
  str[i] = '\0';
  return (str);
}

char	*my_strcat2(char *dest, char *src)
{
  int	i;
  int	j;
  char	*str;

  i = 0;
  j = 0;
  str = x_malloc(sizeof(str) * (my_strlen(dest) + my_strlen(src) + 1));
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

char	**cat_tab(char **tab, char **buffer)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      tab[i] = my_strcat(tab[i], buffer[0]);
      i++;
    }
  return (tab);
}
