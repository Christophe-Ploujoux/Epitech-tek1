/*
** my_strlen.c for my_strlen in /home/ploujo_c/rendu/Piscine_C_J04
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Oct  3 15:51:04 2014 christophe ploujoux
** Last update Sun Nov 30 17:17:47 2014 Ploujoux Christophe
*/

#include "include/my.h"

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] > 0)
    {
      n = n + 1;
    }
  return (n);
}
