/*
** rotate.c for rotate in /home/ploujo_c/rendu/prog-elem/CPE_2014_Pushswap
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Dec 12 11:34:22 2014 Ploujoux Christophe
** Last update Fri Dec 12 15:08:04 2014 Ploujoux Christophe
*/

#include "include/my.h"

int		rotate_first(t_list **list)
{
  int		val;
  t_list	*tmp;

  val = delete(list);
  put_in_end(list, val);
  return (0);
}

int		ra(t_list **list)
{
  rotate_first(list);
  my_putstr("ra ");
  return (0);
}

int		rb(t_list **list)
{
  rotate_first(list);
  my_putstr("rb ");
  return (0);
}
