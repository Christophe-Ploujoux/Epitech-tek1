/*
** djikstra.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 16:45:25 2015 Ploujoux Christophe
** Last update Sun May  3 22:42:11 2015 Ploujoux Christophe
*/

#include "header.h"

int	take_less_weight(t_link *lnk, char **coor, t_path path)
{
  int	i;
  int	save;

  save = path.start + 1;
  i = 0;
  while (coor[i])
    {
      if (save = path.start && lnk[i].weight > 0)
	save = i;
      else if (lnk[i].weight <= lnk[save].weight  && lnk[i].weight > 0 && i != path.start)
	save = i;
      i++;
    }
  printf("weight less; %d\n", lnk[save].weight);
  printf("less weight: %d\n", save);
  return (save);
}

void	djikstra(t_link *lnk, t_path path, char **coor)
{
  int	i;
  int	fath;
  int	son;
  int	index = 0;

  i = 0;
  fath = path.start;
  while (/* son != path.end */ index < 5)
    {
      i = 0;
      if (index == 0)
	fath = path.start;
      else
	fath = take_less_weight(lnk, coor, path);
      printf("fath = %d\n", fath);
      while (i < 2)
	{
	  son = lnk[fath].lk[i];
	  if ((lnk[son].bool == FAUX) && ((lnk[fath].weight + 1 < lnk[son].weight
					   || lnk[son].weight == -1)))
	    {
	      lnk[son].weight = lnk[fath].weight + 1;
	      lnk[son].prev = fath;
	      lnk[son].bool = VRAI;
	    }
	  i++;
	}
      printf("%d\n", lnk[0].weight);
      printf("%d\n", lnk[1].weight);
      printf("%d\n", lnk[2].weight);
      printf("%d\n", lnk[3].weight);
      index++;
    }
}
