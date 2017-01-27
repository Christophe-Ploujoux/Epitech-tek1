/*
** main.c for main in /home/ploujo_c/rendu/maths/105tore
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan  7 13:44:30 2015 Ploujoux Christophe
** Last update Thu Jan  8 12:01:44 2015 Ploujoux Christophe
*/

#include "my.h"

int	main(int ac, char **av)
{
  if (check_arg(ac) == -1)
    return (-1);
  if (check_number(ac, av) == -1)
    return (-1);
  if (av[1][0] == '1')
    bissection_choice(av);
  if (av[1][0] == '2')
    newton_choice(av);
  if (av[1][0] == '3')
    secante_choice(av);
  return (0);
}
