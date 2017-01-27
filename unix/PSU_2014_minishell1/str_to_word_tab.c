/*
** my_str_to_word_tab.c for my_str_to_word_tab in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan 23 16:18:07 2015 Ploujoux Christophe
** Last update Thu Jan 29 21:37:17 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

int	my_countword(char *str, char carac)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (str[i] && str[i] != '\n')
    {
      if (str[i] == carac && str[i + 1] && str[i + 1] != '\n')
	{
	  while (str[i] == carac)
	    i++;
	  n++;
	}
      i++;
    }
  return (n);
}

int	my_count_carac(char *str, char carac)
{
  int	i;
  int	n;

  i = 0;
  while (str[i] && str[i] != carac && str[i] != '\n')
    i++;
  return (i);
}

char	**str_to_word_tab(char *str, char carac)
{
  int	w;
  int	c;
  int	i;
  int	t;
  char	**tab;
  int	save_c;

  t = 0;
  save_c = 0;
  w = my_countword(str, carac);
  if ((tab = malloc(sizeof (*tab) * (w + 2))) == NULL)
    return (NULL);
  while (t <= w)
    {
      (t != 0) ? save_c = save_c + c + 1 : save_c == 0;
      c = my_count_carac(str + save_c, carac);
      if ((tab[t] = malloc(sizeof (char) * (c + 1))) == NULL)
	return (NULL);
      i = 0;
      while (str[i + save_c] != carac && str[i + save_c])
	tab[t][i] = str[(i++) + save_c];
      tab[t++][i] = '\0';
    }
  tab[t] = NULL;
  return (tab);
}
