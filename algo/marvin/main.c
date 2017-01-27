/*
** main.c for main.c in 
** 
** Made by Sebastien BOULOC
** Login   <bouloc_s@epitech.net>
** 
** Started on  Fri Jan  2 20:31:46 2015 Sebastien BOULOC
** Last update Sun Jan  4 17:38:51 2015 Ploujoux Christophe
*/

#include "my.h"

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  if (my_check(ac, av) == 1)
    return (-1);
  if ((i = my_strlen(av[1])) == -1)
    return (-1);
  marvin(av[1], i);
  return (0);
}
