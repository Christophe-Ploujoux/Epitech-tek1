/*
** x_malloc.c for minishell2 in /home/ploujo_c/rendu/unix/PSU_2014_minishell2
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Mar 11 17:36:46 2015 Ploujoux Christophe
** Last update Sun Mar 15 21:18:00 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

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
