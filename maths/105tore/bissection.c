/*
** bissection.c for bissection in /home/ploujo_c/rendu/maths/105tore
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan  7 13:21:01 2015 Ploujoux Christophe
** Last update Sun Jan 18 14:13:56 2015 Ploujoux Christophe
*/

#include "my.h"

void	aff_eq(char **argv)
{
  int	index;

  index = 6;
  while (index >= 2)
    {
      if (atoi(argv[index]) == 1 && index == 6)
	printf("x^4");
      if (atoi(argv[index]) == -1 && index == 6)
	printf("-x^4");
      if (atoi(argv[index]) != 1 && atoi(argv[index]) != -1 && atoi(argv[index]) != 0 && index == 6)
	printf("%dx^4", atoi(argv[index]));
      if (atoi(argv[index]) == 1 && index != 6)
	printf(" + x^%d", index - 2);
      if (atoi(argv[index]) != 1 && atoi(argv[index]) > 0 && index != 6 && index != 2)
	printf(" + %dx^%d", atoi(argv[index]), index - 2);
      if (atoi(argv[index]) != 1 && atoi(argv[index]) < 0 && index != 6 && index != 2)
	printf(" - %dx^%d", -atoi(argv[index]), index - 2);
      if (index == 2 && atoi(argv[index]) > 0)
	printf(" + %d", atoi(argv[index]));
      if (index == 2 && atoi(argv[index]) < 0)
	printf(" - %d", -atoi(argv[index]));
      index--;
    }
  printf(" = 0\n");
}

void		bissection_choice(char **argv)
{
  int		i;
  double	xm;
  double	fxm;
  double	fx1;
  double	x4;
  double	x3;
  double	x2;
  double	x1;
  double	x0;
  double	pt1;
  double	pt2;

  pt1 = 0;
  pt2 = 1;
  x4 = atoi(argv[6]);
  x3 = atoi(argv[5]);
  x2 = atoi(argv[4]);
  x1 = atoi(argv[3]);
  x0 = atoi(argv[2]);
  aff_eq(argv);
  printf("Méthode de la bissection\n");
  printf("Point initial 1: %.f\n", pt1);
  printf("Point initial 2: %.f\n", pt2);
  i = 1;
  while (i < 150)
    {
      if (round(pt1 * pow(10, atoi(argv[7]))) == round(pt2 * pow(10, atoi(argv[7]))))
        {
          printf("f(x): %.1e\n", fxm);
          exit(0);
        }
      xm = (pt1 + pt2) / 2;
      if (i <= 50)
        printf("Itération %d\tx = %.*f\n", i, i, xm);
      else
        printf("Itération %d\tx = %.50f\n", i, xm);
      fxm = (x4 * pow(xm, 4)) + (x3 * pow(xm, 3)) + (x2 * pow(xm, 2)) + (x1 * xm) + x0;
      fx1 = ((x4 * pow(pt1, 4)) + (x3 * pow(pt1, 3)) + (x2 * pow(pt1, 2)) + (x1 * pt1) + x0);
      if (fx1 * fxm < 0)
        pt2 = xm;
      else
        pt1 = xm;
      i++;
    }
  printf("Number of iterations too high. Convergeance doesn't reached\n");
}
