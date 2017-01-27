/*
** ia.c for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1/CPE_2014_allum1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Feb 19 09:57:52 2015 Ploujoux Christophe
** Last update Thu Feb 19 10:54:31 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

void	ia(char **tab, int *nb, int size, char **buffer)
{
  int	save;
  int	ligne;
  int	matches;

  ligne = size - 1;
  save = tab_count(tab);
  while (save == tab_count(tab))
    {
      matches = allum_number(tab[ligne]);
      if (tab_count(tab) != allum_number(tab[ligne]))
	tab = tab_modif(tab, ligne + 1, allum_number(tab[ligne]));
      else
	tab = tab_modif(tab, ligne + 1, allum_number(tab[ligne]) - 1);
      ligne = ligne - 1;
    }
  my_putstr("The AI decided to remove ");
  my_put_nbr(matches);
  my_putstr(" matches from line ");
  my_put_nbr(ligne + 2);
  my_putchar('\n');
  aff_tab(tab);
  loser(tab, buffer, nb);
}
