/*
** my_check.c for 107transfert in /home/ploujo_c/rendu/maths/107transfert
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Mar  5 16:37:53 2015 Ploujoux Christophe
** Last update Thu Mar  5 16:48:01 2015 Ploujoux Christophe
*/

#include "include/my.h"

int	check_number(int ac, char **av)
{
  int	i;
  int	j;

  i = 1;
  while (i < ac)
    {
      j = 0;
      while (av[i][j])
	{
	  if ((av[i][j] < '0' || av[i][j] > '9') && av[i][0] != '-' && av[i][j] != '|')
	    {
	      printf("One of the argument is not a number\n");
	      return (-1);
	    }
	  j++;
	}
      i++;
    }
  return (0);
}

int	check_arg(int ac)
{
  if (ac == 1)
    {
      printf("It would be better if you enter some numbers\n");
      return (-1);
    }
  if (ac != 2 && ac != 3)
    {
      printf("You have to write 1 or 2 arguments\n");
      return (-1);
    }
  return (0);
}
