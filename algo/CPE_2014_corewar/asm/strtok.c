/*
** strtok.c for strtok in /home/ploujo_c/rendu/prog-elem/CPE_2014_corewar
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Apr  8 12:56:52 2015 Ploujoux Christophe
** Last update Sun Apr 12 19:14:37 2015 
*/

#include <stdlib.h>
#include "include/asm.h"

int	len_word(char *str)
{
  int	i;

  i = 0;
  while (str[i] != ' ' && str[i])
    i++;
  return (i);
}

int	count_word(char *str)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (str[i] == ' ')
    i++;
  while (str[i])
    {
      while (str[i] == ' ')
	  i++;
      if ((str[i] != ' ' && str[i] != '\0') &&
	  (str[i - 1] == ' ' || i == 0))
	n++;
      i++;
    }
  return (n);
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
	    str[j] = ' ';
	  j++;
	}
      i++;
    }
  return (str);
}

char	**str_to_word_tab(char *str, char *token)
{
  int	i;
  int	j;
  int	save;
  char	**tab;

  i = 0;
  save = 0;
  tab = x_malloc(sizeof (char *) * (count_word(str) + 3) + 1);
  str = tok(str, token);
  while (i < count_word(str))
    {
      while (str[save] == ' ')
	save++;
      tab[i] = x_malloc(sizeof (char) * len_word(str + save) + 1);
      j = 0;
      while (j < len_word(str + save))
	{
	  tab[i][j] = str[j + save];
	  j++;
	}
      save = save + len_word(str + save);
      tab[i++][j] = '\0';
    }
  tab[i] = NULL;
  return (tab);
}
