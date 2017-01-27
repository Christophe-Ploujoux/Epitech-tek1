/*
** x_malloc.c for malloc in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Apr 28 17:09:06 2015 Ploujoux Christophe
** Last update Tue Apr 28 17:13:51 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

void	*x_malloc(size_t n)
{
  char	*tab;

  tab = malloc(n);
  if (tab == NULL)
    {
      my_putstr("Error with malloc\n");
      exit(EXIT_FAILURE);
    }
  return (tab);
}
