/*
** str2.c for str2 in /home/ploujo_c/rendu/unix/PSU_2014_my_select
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan  9 17:03:31 2015 Ploujoux Christophe
** Last update Sun Jan 11 18:52:27 2015 Ploujoux Christophe
*/

#include "include/my.h"

int	*init_tab(int size, int *ptr)
{
  int	i;

  i = 0;
  ptr = x_malloc(ptr, size);
  while (i < size - 1)
    {
      ptr[i] = 0;
      i++;
    }
  return (ptr);
}

void	init_buffer(char *buffer)
{
  buffer[0] = 0;
  buffer[1] = 0;
  buffer[2] = 0;
  buffer[3] = 0;
  buffer[4] = 0;
}

int	show_params(int ac, char **av)
{
  int	i;

  i = 1;
  while (i < ac)
    {
      my_putstr(av[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}
