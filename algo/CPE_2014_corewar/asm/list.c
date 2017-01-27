/*
** list.c for pushswap in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_Pushswap
**
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
**
** Started on  Mon Dec  8 11:23:30 2014 thomas rieux-laucat
** Last update Sun Apr 12 22:30:17 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/asm.h"

t_list		*my_params_in_list(int ac, char *str)
{
  int		i;
  t_list	*list;

  i = 0;
  list = NULL;
  while (i < (ac - 1))
    {
      my_put_in_list(&list, str);
      i++;
    }
  return (list);
}

char		*last_node(t_list **list)
{
  t_list	*tmp;

  tmp = *list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  return (tmp->data);
}

void		aff_list(t_list *str)
{
  t_list	*tmp;

  tmp = str;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}

void		free_list(t_list **list)
{
  t_list	*tmp;

  while ((*list))
    {
      tmp = (*list)->next;
      free((*list));
      (*list) = tmp;
    }
}

int		my_put_in_list(t_list **list, char *str)
{
  t_list	*elem;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    return (1);
  elem->data = str;
  elem->next = *list;
  *list = elem;
  return (0);
}

t_list		*put_in_end(t_list **list, char *str)
{
  t_list	*elem;
  t_list	*tmp;

  if ((elem = malloc(sizeof(*elem))) == NULL)
    exit(1);
  elem->data = str;
  elem->next = NULL;
  if (*list == NULL)
    return (elem);
  else
    {
      tmp = *list;
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
      return (*list);
    }
}
