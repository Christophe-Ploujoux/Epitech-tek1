/*
** my_list_size.c for my_list_size in /home/ploujo_c/rendu/Piscine_C_J12/ex_02
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct 22 10:40:18 2014 christophe ploujoux
** Last update Wed Oct 22 20:33:47 2014 christophe ploujoux
*/

#include <stdlib.h>
#include "mylist.h"

t_list		*my_params_in_list(int ac, char **av)
{
  int		n;
  struct s_list	*list;

  n = 0;
  list = NULL;
  while (n < ac)
    {
      put_list(&list, n);
      n = n + 1;
    }
  return (list);
}

int		put_list(struct s_list **list, void *data)
{
  struct s_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->data = data;
  elem->next = *list;
  *list = elem;
  return (0);
}

int	my_list_size(t_list *begin)
{
  int	i;

  i = 0;
  while (begin != NULL)
    {
      begin = begin->next;
      i = i + 1;
    }
  return (i);
}
