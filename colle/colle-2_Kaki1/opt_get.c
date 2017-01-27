/*
** opt_get.c for opt_get in /home/ploujo_c/rendu/colle-2_Kaki1
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May  4 19:04:46 2015 christophe ploujoux
** Last update Mon May  4 20:46:41 2015 christophe ploujoux
*/

#include "opt_get.h"
#include <stdlib.h>

int	check_size(int ac, char *av[], const char *format)
{
  int	check;

  check = size_tab(av);
  if (check != ac)
    return (-1);
}

int	check_format(char **av, char **tab, int i)
{
  int	j;

  j = 0;
  while (tab[j])
    {
      if (my_strcmp(tab[j], av[i]) == 0)
	return (0);
      j++;
    }
  return (-1);
}

int	main(int ac, char **av)
{
  const char *format = "-f [-a]";
  char	**tab;

  tab = str_to_word_tab(format, ' ');
  printf("%d\n", check_format(av, tab, 1));
  aff_tab(tab);
}
