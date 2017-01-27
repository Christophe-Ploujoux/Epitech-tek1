/*
** free_list.c for free_list.c in 
** 
** Made by Sebastien BOULOC
** Login   <bouloc_s@epitech.net>
** 
** Started on  Sun Jan  4 15:23:02 2015 Sebastien BOULOC
** Last update Sun Jan  4 15:37:32 2015 Sebastien BOULOC
*/

#include <stdlib.h>
#include "my.h"

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
