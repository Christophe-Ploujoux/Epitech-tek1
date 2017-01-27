/*
** cylindre.c for cylindre in /home/ploujo_c/rendu/maths/104intersection
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Dec 16 19:57:59 2014 Ploujoux Christophe
** Last update Wed Dec 17 11:50:07 2014 Ploujoux Christophe
*/

#include "include/my.h"

void		cylindre(char **argv)
{
  int		a, b, c , r, nb = 0;
  double	x, y, z = 0;
  double	X, Y, Z = 0;
  int		delta = 0;
  double	x1, x2 = 0;

  r = atoi(argv[8]);
  printf("cylindre de rayon %d\n", r);
  printf("droite passant par le point (%d, %d, %d), de vecteur directeur (%d, %d, %d)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
  a = ((pow(atoi(argv[5]), 2)) + (pow(atoi(argv[6]), 2)));
  b = ((2*atoi(argv[2])*atoi(argv[5])) + (2*atoi(argv[3])*atoi(argv[6])));
  c = ((pow(atoi(argv[2]), 2) + pow(atoi(argv[3]), 2)) - pow(r, 2));
  delta = ((pow(b, 2)) - (4*(a*c)));
  if (delta == 0)
    {
      nb = 1;
      x1 = ((-b + sqrt(delta)) / (2*a));
      
      x = atoi(argv[5]) * x1 + atoi(argv[2]);
      y = atoi(argv[6]) * x1 + atoi(argv[3]);
      z = atoi(argv[4]);
      printf("nombre de point d'intersection : %d\n", nb);
      printf("points 1: (%.3f, %.3f, %.0f)\n", x, y, z);
    }
  else if (delta > 0)
    {
      nb = 2;
      x1 = ((-b + sqrt(delta)) / (2*a));
      x2 = ((-b - sqrt(delta)) / (2*a));
      
      x = atoi(argv[5]) * x1 + atoi(argv[2]);
      y = atoi(argv[6]) * x1 + atoi(argv[3]);
      z = atoi(argv[4]);
      
      X = atoi(argv[5]) * x2 + atoi(argv[2]);
      Y = atoi(argv[6]) * x2 + atoi(argv[3]);
      Z = atoi(argv[4]);
      printf("nombre de point d'intersection : %d\n", nb);
      printf("points 1: (%.3f, %.3f, %.0f)\n", X, Y, Z);
      printf("points 2: (%.3f, %.3f, %.0f)\n", x, y, z);
    }
  else
    {
      nb = 0;
      printf("nombre de point d'intersection : %d\n", nb);
    }
}
