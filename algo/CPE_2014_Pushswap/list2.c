/*
** list2.c for list2 in /home/ploujo_c/rendu/prog-elem/CPE_2014_Pushswap
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Dec 12 13:07:48 2014 Ploujoux Christophe
** Last update Sun Dec 14 16:02:58 2014 Ploujoux Christophe
*/

#include "include/my.h"

t_list		*last_elem(t_list *list)
{
  while (list->nxt != NULL)
    list = list->nxt;
  return (list);
}

t_list		*delete_last_elem(t_list *list)
{
  t_list	*tmp;
  t_list	*elem;

  tmp = list;
  elem = list;
  if (list == NULL)
    return (NULL);
  while (tmp->nxt != NULL)
    {
      elem = tmp;
      tmp = tmp->nxt;
    }
  elem->nxt = NULL;
  free(tmp);
  return (list);
}

t_list         *my_params_in_list(int ac, char **av)
{
  int           i;
  t_list       *list;

  i = 1;
  list = NULL;
  while (i < ac)
    {
      list = put_in_end(&list, my_getnbr(av[i]));
      i = i + 1;
    }
  return (list);
}

int		check_list_a(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->nxt != NULL)
    {
      if (tmp->val <= tmp->nxt->val)
	tmp = tmp->nxt;
      else
	return (1);
    }
  return (0);
}

int		check_list_b(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->nxt != NULL)
    {
      if (tmp->val >= tmp->nxt->val)
	tmp = tmp->nxt;
      else
	return (1);
    }
  return (0);
}
