/*
** main.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 19:04:25 2015 Ploujoux Christophe
** Last update Sun May  3 21:54:45 2015 Ploujoux Christophe
*/

#include "header.h"
#include <stdio.h>

int	main()
{
  char	**pars;
  char	**link;
  char	**coord;
  t_link *lnk;
  t_path coor;

  pars = recup_file("lemin");
  remove("lemin");
  aff_list(pars);
  link = my_link(pars);
  coord = my_coord(pars);
  coor = st_end(pars);
  lnk = x_malloc(sizeof(lnk) * (len_line(coord)));
  my_struct(lnk, link, coord, coor);
  djikstra(lnk, coor, coord);
  return (0);
}
