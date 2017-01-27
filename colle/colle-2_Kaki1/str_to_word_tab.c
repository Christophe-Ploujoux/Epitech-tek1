/*
** str_to_word_tab.c for opt_get in /home/ploujo_c/rendu/colle-2_Kaki1
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May  4 19:21:22 2015 christophe ploujoux
** Last update Mon May  4 20:28:22 2015 christophe ploujoux
*/

#include <stdlib.h>
#include <stdio.h>

int	count_word(const char *str, char c)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (str[i] == c)
    i++;
  while (str[i])
    {
      if (str[i] == c && str[i + 1] != c && str[i + 1])
	n++;
      i++;
    }
  return (n + 1);
}

int	len_word(const char *str, char c)
{
  int	i;

  i = 0;
  while (str[i] != c)
    i++;
  return (i);
}

char	**str_to_word_tab(const char *str, char c)
{
  int	i;
  int	j;
  char	**tab;
  int	save;

  i = 0;
  save = 0;
  if (!(tab = malloc(sizeof(char *) * (count_word(str, c) + 1))))
    return (NULL);
  while (i < count_word(str, c))
    {
      while (str[save] == c)
	save++;
      j = 0;
      if (!(tab[i] = malloc(sizeof(char) * len_word(str + save, c))))
	return (NULL);
      while (j < len_word(str + save, c))
	tab[i][j] = str[save + j++];
      tab[i][j] = '\0';
      save = save + j;
      i++;
    }
  tab[i] = NULL;
  return (tab);
}
