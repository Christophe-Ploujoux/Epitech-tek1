/*
** fonction.c for fonction in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 13:59:01 2014 thomas rieux-laucat
** Last update Wed Feb 11 17:17:46 2015 Ploujoux Christophe
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
	  if ((av[i][j] < '0' || av[i][j] > '9') && av[i][0] != '-' && av[1][1] != '.')
	    {
	      printf("One of the argument is not a number\n");
	      return (-1);
	    }
	  j++;
	}
      i++;
    }
  if (atoi(av[1]) < 0 || atoi(av[1]) > 4)
    {
      printf("The constante k must be between 0 and 4.\n");
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
  if (ac != 2 && ac != 3)
    {
      printf("You have to write 1 or 2 arguments\n");
      return (-1);
    }
  return (0);
}
