/*
** my_strlen.c for my_strlen in /home/ploujo_c/rendu/prog-elem/marvin/lib/my
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan  2 21:35:01 2015 Ploujoux Christophe
** Last update Sat Jan  3 12:50:18 2015 Sebastien BOULOC
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  if (str == NULL)
    return (-1);
  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
