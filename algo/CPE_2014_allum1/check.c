/*
** check.c for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Feb 18 19:22:00 2015 Ploujoux Christophe
** Last update Thu Feb 19 19:59:51 2015 Ploujoux Christophe
*/

#include "include/my.h"

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
	i++;
      else
	return (1);
    }
  return (0);
}

void	color_str(char *str, char *color)
{
  my_putstr(color);
  my_putstr(str);
  my_putstr(WHITE);
}

int	size_nb(char **buffer)
{
  int	i;

  i = 0;
  while (buffer[i])
    i++;
  if (i != 2)
    color_str("\nYou have to write 2 arguments[number, number]\n\n", RED);
  return (i);
}

int	check(char **buffer, int *nb, char **al, int size)
{
  if (size_nb(buffer) != 2)
    return (1);
  else if (my_str_isnum(buffer[0]) == 1 || my_str_isnum(buffer[1]) == 1)
    {
      color_str("\nYou have to write 2 arguments[number, number]\n\n", RED);
      return (1);
    }
  else if (nb[0] < 1 || nb[1] <= 0)
    {
      color_str("\nYou have to enter positive numbers\n\n", RED);
      return (1);
    }
  else if (nb[0] - 1 >= size)
    {
      color_str("\nThere is not enough line\n\n", RED);
      return (1);
    }
  else if (nb[1] > allum_number(al[nb[0] - 1]))
    {
      color_str("\nThere is not enough matches\n\n", RED);
      return (1);
    }
  return (0);
}
