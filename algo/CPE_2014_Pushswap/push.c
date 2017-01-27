/*
** push.c for push in /home/ploujo_c/rendu/prog-elem/CPE_2014_Pushswap/CPE_2014_Pushswap
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Dec 11 11:20:11 2014 Ploujoux Christophe
** Last update Sun Dec 14 14:42:59 2014 Ploujoux Christophe
*/

#include "include/my.h"

int		delete(t_list **list)
{
  t_list	*tmp;
  int		val;

  val = 0;
  if (!*list)
    return (1);
  tmp = (*list)->nxt;
  val = (*list)->val;
  free(*list);
  *list = tmp;
  return (val);
}

int		push(t_list **l_a, t_list **l_b)
{
  int		val;

  val = 0;
  val = delete(l_a);
  put_in_first((l_b), val);
  return(0);
}

int		pb(t_list **l_a, t_list **l_b)
{
  push(l_a, l_b);
  my_putstr("pb ");
  return (0);
}

int		pa(t_list **l_a, t_list **l_b)
{
  push(l_b, l_a);
  my_putstr("pa ");
  return (0);
}
