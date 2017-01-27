/*
** init_list.c for init_list.c in 
** 
** Made by Sebastien BOULOC
** Login   <bouloc_s@epitech.net>
** 
** Started on  Sat Jan  3 15:17:28 2015 Sebastien BOULOC
** Last update Sun Jan  4 12:21:38 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "marvin.h"
#include "my.h"

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
