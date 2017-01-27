/*
** list.c for list in /home/ploujo_c/rendu/prog-elem/CPE_2014_Pushswap
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Dec  9 13:56:19 2014 Ploujoux Christophe
** Last update Sun Dec 14 17:31:32 2014 Ploujoux Christophe
*/

#include "include/my.h"

t_list		*put_in_end(t_list **list, int val)
{
  t_list	*elem;
  t_list	*tmp;

  elem = malloc(sizeof(*elem));
  elem->val = val;
  elem->nxt = NULL;
  if (*list == NULL)
    return (elem);
  else
    {
      tmp = *list;
      while (tmp->nxt != NULL)
	tmp = tmp->nxt;
      tmp->nxt = elem;
      return (*list);
    }
}

int		put_in_first(t_list **list, int val)
{
  t_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->val = val;
  elem->nxt = *list;
  *list = elem;
  return (0);
}

void		my_show_list_a(t_list *list)
{
  t_list	*tmp;

  my_putstr("\033[1;36mla\033[m: ");
  tmp = list;
  while(tmp != NULL)
    {
      my_printf("%d ", tmp->val);
      tmp = tmp->nxt;
    }
  my_printf("\n");
}

void		my_show_list_b(t_list *list)
{
  t_list	*tmp;

  my_putstr("\033[1;32mlb\033[m: ");
  tmp = list;
  while(tmp != NULL)
    {
      my_printf("%d ", tmp->val);
      tmp = tmp->nxt;
    }
  my_printf("\n");
}

void		my_free_list(t_list **list)
{
  t_list	*tmp;

  while (*list)
    {
      tmp = (*list)->nxt;
      free(*list);
      *list = tmp;
    }
}
