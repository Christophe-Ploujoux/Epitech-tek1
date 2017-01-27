/*
** main.c<2> for 107transfert in /home/ploujo_c/rendu/maths/107transfert
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Mar  5 16:42:26 2015 Ploujoux Christophe
** Last update Fri Mar  6 15:05:56 2015 Ploujoux Christophe
*/

#include <stdio.h>
#include <sys/timeb.h>
#include <time.h>
#include "include/my.h"

#define ABS(Value) ((Value) < 0 ? (-(Value)) : (Value))

int	power(char *argv)
{
  int	i;
  int	pow;

  i = 0;
  pow = 0;
  while (argv[i])
    {
      if (argv[i] == '|' && argv[i + 1] != '|')
	pow++;
      i++;
    }
  return (pow + 1);
}

int	*my_arg_int(char **argv, int pow)
{
  int	*save;
  int	i;
  char	**tab;

  tab = str_to_word_tab(argv[1], '|');
  i = 0;
  save = malloc(sizeof (int) * (pow + 1));
  while (tab[i])
    {
      save[i] = atoi(tab[i]);;
      i++;
    }
  return (save);
}

void    aff_eq(int *tab, int pow)
{
  int   i;
  int	save;

  i = 0;
  save = pow;
  while (i <= pow - 1)
    {
      if (tab[i] < 0)
	printf("-");
      if (tab[i] > 0 && i != 0)
	printf("+");
      if (i != 0)
	printf(" ");
      if (tab[i] == 0);
      else if (ABS(tab[i]) != 1 && i < pow - 2)
	printf("%dx^%d ", ABS(tab[i]), save - 1);
      else if (i == pow - 2)
	printf("%dx ", ABS(tab[i]));
      else if (tab[i] == 1 && i != pow - 1)
	printf("x^%d ", save - 1);
      else if (i == pow - 1)
	printf("%d ", ABS(tab[i]));
      save--;
      i++;
    }
}

clock_t	horner(int *tab, int pow)
{
  int		i;
  int		result;
  double	x;
  clock_t	c;

  x = 0;
  while (x <= 1000)
    {
      result = 0;
      i = 0;
      while (i <= pow)
	result = x * result + tab[i++];
      x = x + 0.001;
    }
  c = clock();
  printf("Méthode de Horner:\t%d millisecondes\n", (int)round((double) c / 1000));
  return (c / 1000);
}

void	naif(int *tab, int power, clock_t horn)
{
  int		i;
  int		result;
  double	x;
  int		save_pow;
  clock_t	c;

  x = 0;
  while (x <= 1000)
    {
      result = 0;
      i = 0;
      save_pow = power;
      while (save_pow >= 0)
	{
	  result = result + tab[i++] * pow(x, save_pow);
	  save_pow--;
	}
      x = x + 0.001;
    }
  c = clock();
  printf("Algorithme naïf:\t%d millisecondes\n", (int)round((double) c / 1000 - (double)horn));
}

int		main(int argc, char **argv)
{
  int		*save;
  int		pow;
  clock_t	hor;

  if (check_arg(argc) == -1)
    return (-1);
  if (check_number(argc, argv) == -1)
    return (-1);
  if (argc == 2)
    {
      pow = power(argv[1]);
      save = my_arg_int(argv, pow);
      printf("évaluation du polynôme ");
      aff_eq(save, pow);
      printf(" en 1 000 0000 de points :\n");
      hor = horner(save, pow);
      naif(save, pow, hor);
    }
  return (0);
}
