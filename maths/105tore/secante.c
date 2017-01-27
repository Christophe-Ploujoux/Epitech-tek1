/*
** sequante.c for secante in /home/ploujo_c/rendu/maths/105tore
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Jan  8 11:54:48 2015 Ploujoux Christophe
** Last update Sun Jan 18 14:14:06 2015 Ploujoux Christophe
*/

#include "my.h"

void		secante_choice(char **argv)
{
  int		i;
  double	xn;
  double	fxn;
  double	fpt1;
  double	fpt2;
  double	x4;
  double	x3;
  double	x2;
  double	x1;
  double	x0;
  double	pt1;
  double	pt2;

  pt1 = 0.4;
  pt2 = 0.8;
  x4 = atoi(argv[6]);
  x3 = atoi(argv[5]);
  x2 = atoi(argv[4]);
  x1 = atoi(argv[3]);
  x0 = atoi(argv[2]);
  aff_eq(argv);
  printf("Méthode de la secante\n");
  printf("Point initial 1: %.1f\n", pt1);
  printf("Point initial 2: %.1f\n", pt2);
  i = 1;
  while (i < 150)
    {
      if (round(pt1 * pow(3, atoi(argv[7]))) == round(pt2 * pow(3, atoi(argv[7]))))
        {
          printf("f(x): %.1e\n", fxn);
          exit(0);
        }
      fpt1 = (x4 * pow(pt1, 4)) + (x3 * pow(pt1, 3)) + (x2 * pow(pt1, 2)) + (x1 * pt1) + x0;
      fpt2 = (x4 * pow(pt2, 4)) + (x3 * pow(pt2, 3)) + (x2 * pow(pt2, 2)) + (x1 * pt2) + x0;
      if (fpt2 - fpt1 == 0)
	{
	  printf("Division by zero impossible\n");
	  exit(0);
	}
      xn = pt2 - ((fpt2) * (pt2 - pt1) / (fpt2 - fpt1));
      fxn = (x4 * pow(xn, 4)) + (x3 * pow(xn, 3)) + (x2 * pow(xn, 2)) + (x1 * xn) + x0;
      printf("Itération %d\tx = %.15f\n", i, xn);
      pt1 = pt2;
      pt2 = xn;
      i++;
    }
  printf("Number of iterations too high. Convergeance doesn't reached\n");
}
