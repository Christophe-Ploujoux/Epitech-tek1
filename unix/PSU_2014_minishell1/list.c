/*
** list.c for list in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Jan 27 20:22:34 2015 Ploujoux Christophe
** Last update Fri Jan 30 15:49:39 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

t_list		*init_list(void)
{
  t_list        *racine;

  racine = malloc(sizeof(*racine));
  if (racine == NULL)
    return (NULL);
  racine->prev = racine;
  racine->next = racine;
  return (racine);
}

int            ad_before_racine(t_list *elem, char *data)
{
  t_list        *new_elem;

  new_elem = malloc(sizeof(*new_elem));
  if (new_elem == NULL)
    return (-1);
  new_elem->data = data;
  new_elem->prev = elem;
  new_elem->next = elem->next;
  elem->next->prev = new_elem;
  elem->next = new_elem;
  return (0);
}

void	my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  tmp = tmp->prev;
  while (tmp != list)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->prev;
    }
}

int             size_list(t_list *list)
{
  t_list        *tmp;
  int           count;

  if (list == NULL)
    return (0);
  count = 0;
  tmp = list;
  tmp = tmp->next;
  while (tmp != list)
    {
      tmp = tmp->next;
      count++;
    }
  return (count);
}

void		free_list(t_list *list)
{
  int		count;
  t_list	*save_list_next;

  count = size_list(list);
  while (count >= 0)
    {
      if (list != NULL)
	{
	  save_list_next = list->next;
	  free(list);
	  list = save_list_next;
	}
      count--;
    }
}
