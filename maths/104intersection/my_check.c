/*
** fonction.c for fonction in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 13:59:01 2014 thomas rieux-laucat
** Last update Mon Dec 29 17:34:01 2014 Ploujoux Christophe
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
	  if ((av[i][j] < '0' || av[i][j] > '9') && av[i][0] != '-')
	    {
	      printf("One of the argument is not a number\n");
	      return (1);
	    }
	  j++;
	}
      i++;
    }
  if (atoi(av[1]) < 1 || atoi(av[1]) > 3)
    {
      printf("There is only 3 options possible = 1: sphere, 2: cylinder, 3: cone\n");
      return (1);
    }
  if (atoi(av[5]) == 0 && atoi(av[6]) == 0 && atoi(av[7]) == 0)
    {
      printf("Division by 0 impossible\n");
      return (1);
    }
  return (0);
}

int	check_arg(int ac)
{
  if (ac == 1)
    {
      printf("It would be better if you enter some numbers\n");
      return (1);
    }
  if (ac != 9)
    {
      printf("You have to write 8 arguments\n");
      return (1);
    }
  return (0);
}
