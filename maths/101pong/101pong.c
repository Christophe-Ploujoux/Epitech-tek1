/*
** main.c for main in /home/ploujo_c/rendu/maths
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Nov 10 19:47:34 2014 Ploujoux Christophe
<<<<<<< HEAD
** Last update Wed Nov 12 18:40:32 2014 Ploujoux Christophe
=======
** Last update Tue Nov 11 16:27:01 2014 Ploujoux Christophe
>>>>>>> 8c37a292a97c58f5080fbf73f559f8884520ffbb
*/
#define M_PI (3.14159265358979323846)
#define INT_MIN (-2147483648)
#define INT_MAX (2147483647)

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "include/my.h"

/*mauvais nombre d'argument*/
int     msg_error(int ac)
{
  if (ac > 8)
    {
      printf("Error : too much argument(s)\n");
      return (1);
    }
  if (ac < 8)
    {
      printf("Error : missing argument(s)\n");
      return (1);
    }
  return (0);
}

/*vérification lettre*/
int     check_arg(char **av)
{
  int   i;

  i = 1;
  while (i < 8)
    {
      if (my_str_isnum(av[i]) == 1)
	{
	  printf("Oups...\n");
	  return (1);
	}
      i += 1;
    }
  return (0);
}

/*verification int*/
int	check_nbr(char **av)
{
  int	i;
  
  i = 1;
  while (i < 8)

    {
      if (my_getnbr(av[i]) < -2147483647 || my_getnbr(av[i]) > 2147483646)
	{
	  printf("Error : this number is not an integer\n");
	  return (1);
	}
      i+= 1;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  if (msg_error(argc) == 1)
    return (1);
  else
    {
      int	xt_1 = my_getnbr(argv[1]);
      int	yt_1 = my_getnbr(argv[2]);
      int	zt_1 = my_getnbr(argv[3]);
      int	xt = my_getnbr(argv[4]);
      int	yt = my_getnbr(argv[5]);
      int	zt = my_getnbr(argv[6]);
      int	t = my_getnbr(argv[7]);
      int	v_x , v_y, v_z;
      int	xtn, ytn, ztn;
      float	coord;
      int	div0;

      if (check_nbr(argv) == 1)
	return (1);
      if (check_arg(argv) == 1)
	return (1);
      else 
	{
	  /*calcul vecteur vitess*/
	  v_x = (xt - xt_1);
	  v_y = (yt - yt_1);
	  v_z = (zt - zt_1);
	  printf("Les coordonnées du vecteur vitesse sont (%d;%d;%d).\n", 
		 v_x, v_y, v_z);

	  /*calcul coordonnée à l instant t + n*/
	  v_x = t * v_x;
	  v_y = t * v_y;
	  v_z = t * v_z;
	  xtn = xt + v_x;
	  ytn = yt + v_y;
	  ztn = zt + v_z;
	  printf("A l'instant t+%d, les coordonnées de la balle seront (%d;%d;%d).\n",
		 t, xtn, ytn, ztn);

	  v_x = xt - xt_1;
	  v_y = yt - yt_1;
	  v_z = zt - zt_1;
	  /*gestion division par 0*/
	  div0 = ((v_x * v_x) + (v_y * v_y) + (v_z * v_z));
	  if (div0 == 0)
	    {
	      printf("Division par 0 impossible\n");
	      return (1);
	    }
	   /*calcul angle d'incidence*/
	  coord = ((180 * 
		    (acos(sqrt((v_x * v_x) +(v_y * v_y)) / sqrt(div0)))) / 
		   M_PI);
	  printf("L'angle d'incidence est de %.2f degrés.\n", coord);
	  return (0);
	}
    }
}
