/*
** main.c for 104intersection in /home/rieux-_t/Documents/rendu/Maths/104intersection
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Tue Dec 16 16:21:20 2014 thomas rieux-laucat
** Last update Wed Dec 17 12:30:40 2014 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

int	main(int argc, char **argv)
{
  if (check_arg(argc) == 1)
    return (1);
  if (check_number(argc, argv) == 1)
    return (1);
  if (atoi(argv[1]) == 1)
    sphere(argv);
  if (atoi(argv[1]) == 2)
    cylindre(argv);
  if (atoi(argv[1]) == 3)
    cone(argv);
  return (0);
}
