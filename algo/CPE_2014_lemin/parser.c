/*
** parser.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 18:29:02 2015 Ploujoux Christophe
** Last update Sun May  3 19:04:54 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <stdio.h>
#include "header.h"

void	init_i(t_link *lnk, char **coord, int start)
{
  int	i;

  i = 0;
  while (coord[i])
    {
      lnk[i].i = 0;
      i++;
    }
  i = 0;
  while (coord[i])
    {
      lnk[i].weight = -1;
      i++;
    }
  i = 0;
  lnk[start].weight = 0;
  lnk[start].bool = VRAI;
}

t_path		st_end(char **tab)
{
  t_path	coor;
  int		i;

  i = 0;
  while (tab[i])
    {
      if (my_strcmp(tab[i], "##start") == 0)
	coor.start = my_get_nbr(str_to_word_tab(tab[i + 1], ",")[0]);
      if (my_strcmp(tab[i], "##end") == 0)
	coor.end = my_get_nbr(str_to_word_tab(tab[i + 1], ",")[0]);
      i++;
    }
  return (coor);
}

int	link_nbr(char **link, int nb)
{
  int	i;
  char	**tok;
  int	ret;

  i = 0;
  ret = 0;
  while (link[i])
    {
      tok = str_to_word_tab(link[i], "-");
      if (my_get_nbr(tok[0]) == nb || my_get_nbr(tok[1]) == nb)
	ret = ret + 1;
      i++;
    }
  return (ret);
}

void	my_struct(t_link *lnk, char **link, char **coord, t_path st)
{
  int	i;
  char	**tok;
  int	stc;
  int	stc2;

  i = 0;
  init_i(lnk, coord, st.start);
  while (link[i])
    {
      tok = str_to_word_tab(link[i], "-");
      stc = my_get_nbr(tok[0]);
      stc2 = my_get_nbr(tok[1]);
      lnk[stc].lk[lnk[stc].i] = stc2;
      lnk[stc2].lk[lnk[stc2].i] = stc;
      lnk[stc].i++;
      lnk[stc2].i++;
      i++;
    }
}
