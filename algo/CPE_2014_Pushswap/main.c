/*
** main.c for main in /home/ploujo_c/rendu/prog-elem/CPE_2014_Pushswap
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Dec  8 13:51:15 2014 Ploujoux Christophe
** Last update Sun Dec 14 22:18:41 2014 Ploujoux Christophe
*/

#include "include/my.h"

int		main(int argc, char **argv)
{
  t_list	*l_a;
  t_list	*l_b;

  l_b = NULL;
  if (check_arg(argc, argv) == 1)
    return (0);
  else
    {
      l_a = my_params_in_list(argc, argv);
      if (check_list(l_a) == 1)
	return (0);
      if (check_opt(argv) == 1)
	sort_bonus(&l_a, &l_b);
      else
	sort(&l_a, &l_b);
    }
  my_free_list(&l_a);
  my_free_list(&l_b);
  return (0);
}
