/*
** str_to_word_tab.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:57:19 2015 Ploujoux Christophe
** Last update Thu Jun  4 18:49:20 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "my.h"

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
      if (str[i] == carac1  && str[i + 1] != carac1 && str[i + 1] != '\0')
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

int	carac_sup(char *str, char carac, int save)
{
  while (str[save] == carac)
    save++;
  return (save);
}

char	**loop(char carac, int c, char **tab, char *str)
{
  int	i;
  int	j;
  int	save_c;

  i = 0;
  save_c = 0;
  if (!(tab = malloc(sizeof (char *) * (my_count_word(str, carac) + 1))))
    return (NULL);
  while (i < my_count_word(str, carac))
    {
      save_c = carac_sup(str, carac, save_c);
      c = my_word(str + save_c, carac);
      if (!(tab[i] = malloc(sizeof (char) * (c + 1))))
	return (NULL);
      j = 0;
      while (j < c)
	{
	  tab[i][j] = str[j + save_c];
	  j++;
	}
      tab[i++][j] = '\0';
      save_c = save_c + c + 1;
    }
  tab[i] = NULL;
  return (tab);
}

char	*tok(char *str, char *token)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (token[i])
    {
      j = 0;
      while (str[j])
	{
	  if (str[j] == token[i])
	    str[j] = token[0];
	  j++;
	}
      i++;
    }
  return (str);
}

char	**str_to_word_tab(char *str, char *token)
{
  char	**tab;
  int	c;
  int	carac;

  tab = NULL;
  c = 0;
  str = tok(str, token);
  carac = token[0];
  tab = loop(carac, c, tab, str);
  return (tab);
}
