/*
** main.c for main in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 28 11:28:35 2014 Ploujoux Christophe
** Last update Sun Nov 30 12:59:54 2014 Ploujoux Christophe
*/

#include "include/my.h"

int	main(int argc, char **argv)
{
  if (argc == 1)
    {
      ls();
      return (0);
    }
  if (argc > 2)
    my_putstr("J'ai pas fait les paths\n");
  else if (my_strlen(argv[1]) > 2)
    my_putstr("J ai pas fait les combinaison\n");
  else
    {
      (argv[1][0] == '-' && argv[1][1] == 'l') ? ls_l() : 0;
      (argv[1][0] == '-' && argv[1][1] == 'd') ? ls_d() : 0;
      (argv[1][0] == '-' && argv[1][1] == 'R') ? ls_R(".") : 0;
    }
  return (0);
}
