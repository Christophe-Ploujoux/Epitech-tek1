/*
** check.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Mar  1 20:24:13 2015 Ploujoux Christophe
** Last update Sun Mar  1 20:52:43 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "include/my.h"
#include <stdio.h>

int	check_cmd3(char **av, int i)
{
  if (my_strcmp("-d", av[i-1]) == 0 || my_strcmp("-e", av[i-1]) == 0)
    {
      printf("[ ERROR ]  : Flag not good used !\n");
      return (1);
    }
  else if (av[i-1][0] != '-')
    {
      printf("[ ERROR ]  : Flag not good used !\n");
      return (1);
    }
  return (0);
}

int	check_cmd2(int ac, char **av, int o, int k)
{
  int	i;
  int	de;
  int	f;

  i = 1;
  de = 10;
  f = 10;
  while (i <= (ac - 1))
    {
      if ((my_strcmp("-d", av[i]) == 0 && de != 0) ||
	  (my_strcmp("-e", av[i]) == 0 && de != 0))
	de = 0;
      else if (my_strcmp("-f", av[i]) == 0 && f != 0)
	f = 0;
      else if (my_strcmp("-o", av[i]) == 0 && o != 0)
	o = 0;
      else if (my_strcmp("-k", av[i]) == 0 && k != 0)
	k = 0;
      else if ((my_strcmp("-e", av[i]) == 0 && de != 1)
	       || (my_strcmp("-d", av[i])== 0 && de != 1)
	       || (my_strcmp("-f", av[i]) == 0 && f != 1)
	       || (my_strcmp("-o", av[i]) == 0 && o != 1)
	       || (my_strcmp("-k", av[i]) == 0 && k != 1))
	return (1);
      else if (check_cmd3(av, i) != 0 )
	return (1);
      i++;
    }
  return (0);
}

int	check_cmd(int ac, char **av)
{

  int	o;
  int	k;

  o = 10;
  k = 10;
  if (ac < 8)
    {
      printf("not enough argument\n");
      return (1);
    }
  if (ac > 8)
    {
      printf("too much argument\n");
      return (1);
    }
  if (check_cmd2(ac, av, o, k) != 0)
    return (1);
  return (0);
}

void	check_len_key(int len_key)
{
  if ((len_key) != 18 && (len_key) != 8 &&
      (len_key != 16) && (len_key != 64))
    {
      printf("[ ERROR ] : Wrong lenght key\n");
      printf("[ USAGE ] : lenght 4 8 16 64\n");
      exit(0);
    }
}
