/*
** decrypt.c for decrypt in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Nov 24 16:21:54 2014 thomas rieux-laucat
** Last update Sun Nov 30 16:17:29 2014 Ploujoux Christophe
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"
#include <math.h>

void	decryptage(char **argv)
{
  int	size = my_strlen_space(argv[1]);
  float	x1 = my_getnbr(argv[2]);
  float	y1 = my_getnbr(argv[4]);
  float	x2 = my_getnbr(argv[3]);
  float	y2 = my_getnbr(argv[5]);
  float	x1bis;
  float	det;
  float *flag_d;
  float	*res;
  int	i;
  
  res = malloc(size*sizeof(float));
  flag_d = get_flag_base(argv[1], argv[6]);
  det = (x1 * y2) - (x2 * y1);
  i = 0;
  if (det == 0)
    printf("Impossible d'inverser, les vecteurs colonnes sont liés(le determinant est égal à 0)\n");
  else
    {
      det = 1 / det;
      x1bis = x1;
      x1 = y2 * det;
      y1 = (-y1) * det;
      x2 = (-x2) * det;
      y2 = x1bis * det;
      while (i <= size)
	{
	  res[i] = (flag_d[i] * x1) + (flag_d[i + 1] * y1);
	  res[i + 1] = (flag_d[i] * x2) + (flag_d[i + 1] * y2);
	  i = i + 2;
	}
      i = 0;
      while (i <= size)
	{
	  (res[i] < 0) ? (res[i] = -res[i]) : 0;
	  (res[i] > 0.5 && res[i] <= 1) ? (res[i] = 1) : 0;
	  (res[i] > 1.5 && res[i] <= 2) ? (res[i] = 2) : 0;
	  (res[i] > 2.5 && res[i] <= 3) ? (res[i] = 3) : 0;
	  (res[i] > 3.5 && res[i] <= 4) ? (res[i] = 4) : 0;
	  (res[i] > 4.5 && res[i] <= 5) ? (res[i] = 5) : 0;
	  (res[i] > 5.5 && res[i] <= 6) ? (res[i] = 6) : 0;
	  (res[i] > 6.5 && res[i] <= 7) ? (res[i] = 7) : 0;
	  (res[i] > 7.5 && res[i] <= 8) ? (res[i] = 8) : 0;
	  (res[i] > 8.5 && res[i] <= 9) ? (res[i] = 9) : 0;
	  (res[i] > 9.5 && res[i] <= 10) ? (res[i] = 10) : 0;
	  (res[i] > 10.5 && res[i] <= 11) ? (res[i] = 11) : 0;
	  (res[i] > 11.5 && res[i] <= 12) ? (res[i] = 12) : 0;
	  (res[i] > 12.5 && res[i] <= 13) ? (res[i] = 13) : 0;
	  (res[i] > 13.5 && res[i] <= 14) ? (res[i] = 14) : 0;
	  (res[i] > 14.5 && res[i] <= 15) ? (res[i] = 15) : 0;
	  (res[i] > 15.5 && res[i] <= 16) ? (res[i] = 16) : 0;
	  (res[i] > 16.5 && res[i] <= 17) ? (res[i] = 17) : 0;
	  (res[i] > 17.5 && res[i] <= 18) ? (res[i] = 18) : 0;
	  (res[i] > 18.5 && res[i] <= 19) ? (res[i] = 19) : 0;
	  (res[i] > 19.5 && res[i] <= 20) ? (res[i] = 20) : 0;
	  (res[i] > 20.5 && res[i] <= 21) ? (res[i] = 21) : 0;
	  (res[i] > 21.5 && res[i] <= 22) ? (res[i] = 22) : 0;
	  (res[i] > 22.5 && res[i] <= 23) ? (res[i] = 23) : 0;
	  (res[i] > 23.5 && res[i] <= 24) ? (res[i] = 24) : 0;
	  (res[i] > 24.5 && res[i] <= 25) ? (res[i] = 25) : 0;
	  (res[i] > 25.5 && res[i] <= 26) ? (res[i] = 26) : 0;
	  (res[i] > 26.5 && res[i] <= 27) ? (res[i] = 27) : 0;
	  my_put_nbr_base(res[i], " abcdefghijklmnopqrstuvwxyz");
	  i = i + 1;
	}
      printf("\n");
    }
}
