/*
** my_putstr.c for my_putstr.c in 
** 
** Made by Sebastien BOULOC
** Login   <bouloc_s@epitech.net>
** 
** Started on  Fri Jan  2 20:22:53 2015 Sebastien BOULOC
** Last update Fri Jan  2 20:25:44 2015 Sebastien BOULOC
*/

#include <stdlib.h>
#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  if (str == NULL)
    return (-1);
  i = 0;
  while (str[i] != '\0')
    {
      if (my_putchar(str[i]) == (-1))
	return (-1);
      i++;
    }
  return (0);
}
