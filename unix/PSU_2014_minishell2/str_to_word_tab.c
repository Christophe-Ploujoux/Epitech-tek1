/*
** my_str_to_word_tab.c for my_str_to_word_tab in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan 23 16:18:07 2015 Ploujoux Christophe
** Last update Sun Mar 15 21:22:46 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

int	my_count_word(char *str, char carac1)
{
  int	nb;
  int	i;

  i = 0;
  nb = 1;
  while (str[i] == carac1)
    i++;
  while (str[i])
    {
      if (str[i] == carac1 && str[i + 1] != carac1 && str[i + 1] != '\0')
	nb++;
      i++;
    }
  return (nb);
}

int	my_word(char *str, char a)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] == a)
    i++;
  while (str[i] && str[i] != a)
    {
      nb++;
      i++;
    }
  return (nb);
}

char	**loop(int save_c, char carac, int c, char **tab, char *str)
{
  int	i;
  int	j;

  i = 0;
  tab = x_malloc(sizeof (char *) * (my_count_word(str, carac) + 1));
  while (i < my_count_word(str, carac))
    {
      while (str[save_c] == carac)
	save_c++;
      c = my_word(str + save_c, carac);
      tab[i] = x_malloc(sizeof (char) * (c + 1));
      j = 0;
      while (j < c)
	{
	  if (str[j + save_c] != carac)
	    tab[i][j] = str[j + save_c];
	  j++;
	}
      tab[i][j] = '\0';
      i++;
      save_c = save_c + c + 1;
    }
  tab[i] = NULL;
  return (tab);
}

char	**str_to_word_tab(char *str, char carac)
{
  char	**tab;
  int	c;
  int	save_c;

  tab = NULL;
  save_c = 0;
  c = 0;
  tab = loop(save_c, carac, c, tab, str);
  return (tab);
}
