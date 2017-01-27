/*
** newton.c for newtton in /home/ploujo_c/rendu/maths/105tore
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Jan  8 10:20:24 2015 Ploujoux Christophe
** Last update Sun Jan 18 14:14:42 2015 Ploujoux Christophe
*/

#include "my.h"

void		newton_choice(char **argv)
{
  int		i;
  double	fxn;
  double	fxn2;
  double	fpxn;
  double	x4;
  double	x3;
  double	x2;
  double	x1;
  double	x0;
  double	xn1;
  double	xn2;

  x4 = atoi(argv[6]);
  x3 = atoi(argv[5]);
  x2 = atoi(argv[4]);
  x1 = atoi(argv[3]);
  x0 = atoi(argv[2]);
  aff_eq(argv);
  printf("Méthode de Newton\n");
  printf("Point initial: 0.5\n");
  i = 1;
  xn1 = 0.5;
  while (i < 150)
    {
      fxn = (x4 * pow(xn1, 4)) + (x3 * pow(xn1, 3)) + (x2 * pow(xn1, 2)) + (x1 * xn1) + x0;
      fpxn = (4 * (x4 * pow(xn1, 3))) + (3 * (x3 * pow(xn1, 2))) + (2 * x2 * xn1) + x1;
      if (fpxn == 0)
	{
	  printf("Division by zero impossible.\n");
	  exit(0);
	}
      xn2 = xn1 - (fxn / fpxn);
      if (round(xn1 * pow(10, atoi(argv[7]))) == round(xn2 * pow(10, atoi(argv[7]))))
        {
          printf("f(x): %.1e\n", fxn2);
          exit(0);
        }
      fxn2 = (x4 * pow(xn2, 4)) + (x3 * pow(xn2, 3)) + (x2 * pow(xn2, 2)) + (x1 * xn2) + x0;
      printf("Itération %d\tx = %.20f\n", i, xn2);
      xn1 = xn2;
      i++;
    }
  printf("Number of iterations too high. Convergeance doesn't reached\n");
}
