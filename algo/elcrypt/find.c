/*
** find.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Mar  1 20:23:34 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:52:09 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "include/my.h"

char	*find_key(int ac, char **av)
{
  int	i;
  char	*key;

  i = 1;
  while (i <= (ac - 1))
    {
      if (my_strcmp("-k", av[i]) == 0)
	key = av[i+1];
      i++;
    }
  check_len_key(my_strlen(key));
  return (key);
}

int	find_fd1(int ac, char **av)
{
  int	i;
  int	fd1;

  i = 1;
  while (i <= (ac - 1))
    {
      if (my_strcmp("-f", av[i]) == 0)
	{
	  if ((fd1 = open(av[i+1], O_RDONLY)) < 0)
	    return (-1);
	}
      i++;
    }
  return (fd1);
}

FILE	*find_fd2(int ac, char **av)
{
  int	i;
  FILE	*fd2;

  i = 1;
  while (i <= (ac - 1))
    {
      if (my_strcmp("-o", av[i]) == 0)
	{
	  if ((fd2 = fopen(av[i+1], "wb")) == NULL)
	    return (NULL);
	}
      i++;
    }
  return (fd2);
}

int	find_mod(char **av)
{
  int	i;

  i = 0;
  while (av[i])
    {
      if (my_strcmp("-d", av[i]) == 0)
	return (1);
      if (my_strcmp("-e", av[i]) == 0)
	return (2);
      i++;
    }
  return (0);
}
