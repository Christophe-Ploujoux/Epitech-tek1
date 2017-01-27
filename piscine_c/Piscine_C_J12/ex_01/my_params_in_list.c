/*
** my_params_in_list.c for my_params_in_list in /home/ploujo_c/rendu/Piscine_C_J12/ex_01
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Oct 21 12:11:04 2014 christophe ploujoux
** Last update Wed Oct 22 18:00:44 2014 christophe ploujoux
*/

#include <stdlib.h>
#include "mylist.h"

t_list		*my_params_in_list(int ac, char **av)
{
  int		n;
  struct s_list	*list;

  n = 1;
  list = NULL;
  while (n < ac)
    {
      put_list(&list, av[n]);
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

void		show_params(struct s_list *list)
{
  struct s_list	*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp -> data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
