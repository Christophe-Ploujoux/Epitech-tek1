/*
** free.c for my_mastermind in /home/ploujo_c/rendu/colle-4-BA67
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May 18 22:04:51 2015 christophe ploujoux
** Last update Mon May 18 22:27:46 2015 christophe ploujoux
*/

#include <stdlib.h>
#include "my.h"

void	free_struct(t_par par)
{
  free(par.pions);
  free(par.charpion);
  free(par.code);
}
