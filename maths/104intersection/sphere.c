/*
** main.c for 104intersection in /home/rieux-_t/Documents/rendu/Maths/104intersection
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Tue Dec 16 14:15:17 2014 thomas rieux-laucat
** Last update Wed Dec 17 14:54:51 2014 Ploujoux Christophe
*/

#include "include/my.h"

void		sphere(char **argv)
{
  int		a, b, c, r, nb = 0;
  double	x, y, z = 0;
  double	X, Y, Z = 0;
  int		delta = 0;
  double	x1, x2 = 0;

  printf("sphère de rayon %s\n", argv[8]);
  r = atoi(argv[8]);
  printf("droite passant par le point (%d, %d, %d), de vecteur directeur (%d, %d, %d)\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]), atoi(argv[6]), atoi(argv[7]));
  a = ((pow(atoi(argv[5]), 2)) + (pow(atoi(argv[6]), 2)) + (pow(atoi(argv[7]), 2)));
  b = ((2 * atoi(argv[2]) * atoi(argv[5])) + (2 * atoi(argv[3]) * atoi(argv[6])) + (2 * atoi(argv[4]) * atoi(argv[7])));
  c = ((pow(atoi(argv[2]), 2) + pow(atoi(argv[3]), 2) + pow(atoi(argv[4]), 2)) - pow(r, 2));  
  delta = ((pow(b, 2)) - (4 *(a * c)));
  if (delta == 0)
    {
      nb = 1;
      x1 = ((-b + sqrt(delta)) / (2 * a));
      x = atoi(argv[5]) * x1 + atoi(argv[2]);
      y = atoi(argv[6]) * x1 + atoi(argv[3]);
      z = atoi(argv[7]) * x1 + atoi(argv[4]);
      printf("nombre de point d'intersection : %d\n", nb);
      printf("points 1: (%.3f, %.3f, %.3f)\n", x, y, z);
    }
  else if (delta > 0)
    {
      nb = 2;
      x1 = ((-b + sqrt(delta)) / (2*a));
      x2 = ((-b - sqrt(delta)) / (2*a));
      x = atoi(argv[5]) * x1+ atoi(argv[2]);
      y = atoi(argv[6]) * x1+ atoi(argv[3]);
      z = atoi(argv[7]) * x1+ atoi(argv[4]);
      X = atoi(argv[5]) * x2 + atoi(argv[2]);
      Y = atoi(argv[6]) * x2 + atoi(argv[3]);
      Z = atoi(argv[7]) * x2 + atoi(argv[4]);
      printf("nombre de point d'intersection : %d\n", nb);
      printf("points 1: (%.3f, %.3f, %.3f)\n", X, Y, Z);
      printf("points 2: (%.3f, %.3f, %.3f)\n", x, y, z);
    }
  else
    {
      nb = 0;
      printf("nombre de point d'intersection : %d\n", nb);
    }
}
