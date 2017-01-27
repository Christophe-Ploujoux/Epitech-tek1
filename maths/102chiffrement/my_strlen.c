/*
** my_strlen.c for my_strlen in /home/ploujo_c/rendu/Piscine_C_J04
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Oct  3 15:51:04 2014 christophe ploujoux
** Last update Wed Nov 26 14:07:44 2014 Ploujoux Christophe
*/

#include "include/my.h"

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n])
    {
      n = n + 1;
    }
  return (n);
}

int	my_strlen_space(char *str)
{
  int	i;
  int	space;

  i = 0;
  space = 0;
  while (str[i])
    {
      if (str[i] == ' ')
	{
	  space = space + 1;
	}
      i = i + 1;;
    }
  return (space);
}
