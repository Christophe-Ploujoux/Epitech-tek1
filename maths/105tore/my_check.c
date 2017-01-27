/*
** fonction.c for fonction in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 13:59:01 2014 thomas rieux-laucat
** Last update Wed Jan  7 13:53:47 2015 Ploujoux Christophe
*/

#include "my.h"

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
	      return (-1);
	    }
	  j++;
	}
      i++;
    }
  if (atoi(av[1]) < 1 || atoi(av[1]) > 3)
    {
      printf("There is only 3 options possible = 1: bissection, 2: Newton, 3: secante.\n");
      return (-1);
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
  if (ac != 8)
    {
      printf("You have to write 7 arguments\n");
      return (-1);
    }
  return (0);
}
