/*
** fonction.c for fonction in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 13:59:01 2014 thomas rieux-laucat
** Last update Sun Dec 14 23:20:01 2014 Ploujoux Christophe
*/

#include "include/my.h"

int	check_list(t_list *list)
{
  if (check_list_a(list) == 0)
    {
      my_putstr("This list is already sort\n");
      return (1);
    }
  return (0);
}

int	check_alph(int ac, char **av)
{
  int	i;
  int	j;

  i = 1;
  while (i < ac)
    {
      j = 0;
      while (av[i][j])
	{
	  if ((av[i][1] == 'v' && av[i][0] == '-')
	      && (av[i][j] < '0' || av[i][j] > '9') && av[i][2] != '\0')
	    return (1);
	  else if (av[i][0] != '-' && (av[i][j] < '0' || av[i][j] > '9'))
	    return (1);
	  j++;
	}
      i++;
    }
  return (0);
}

int	check_arg(int ac, char **av)
{
  if (ac == 1)
    {
      my_putstr("It would be better if you enter some numbers\n");
      return (1);
    }
  if (ac == 2)
    {
      my_putstr("It's not very interesting to sort a list of one number\n");
      return (1);
    }
  if (check_alph(ac, av) == 1)
    {
      my_putstr("One of the argument is not a number (or maybe try -v)\n");
      return (1);
    }
  return (0);
}

int	check_opt(char **av)
{
  int	i;
  int	j;

  i = 0;
  while (av[i])
    {
      j = 0;
      while (av[i][j] != '\0')
	{
	  if (av[i][0] == '-' && av[i][1] == 'v'
	      && av[i][2] == '\0')
	    return (1);
	  j++;
	}
      i++;
    }
  return (0);
}
