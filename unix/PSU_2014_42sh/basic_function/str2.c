/*
** str2.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:56:58 2015 Ploujoux Christophe
** Last update Sun May 24 15:56:59 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "my.h"

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
  if (!(str = malloc(sizeof(str) * (my_strlen(dest) + my_strlen(src) + 1))))
    return (NULL);
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
  if (!(str = malloc(sizeof(str) * (my_strlen(dest) + my_strlen(src) + 1))))
    return (NULL);
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
