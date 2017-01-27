/*
** swap.c for swap in /home/ploujo_c/rendu/prog-elem/CPE_2014_Pushswap/CPE_2014_Pushswap
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Dec 11 11:19:06 2014 Ploujoux Christophe
** Last update Fri Dec 12 20:40:42 2014 Ploujoux Christophe
*/

#include "include/my.h"

int		swap(t_list **list)
{
  int		nb;

  if ((*list) == NULL|| (*list)->nxt == NULL)
    return (1);
  else
    {
      nb = (*list)->val;
      (*list)->val = (*list)->nxt->val;
      (*list)->nxt->val = nb;
    }
  return (0);
}

int		sa(t_list **list)
{
  swap(list);
  my_putstr("sa ");
  return (0);
}

int		sb(t_list **list)
{
  swap(list);
  my_putstr("sb ");
  return (0);
}
