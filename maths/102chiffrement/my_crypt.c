/*
** crypt.c for crypt in /home/ploujo_c/rendu/maths/102chiffrement
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Nov 19 15:13:08 2014 Ploujoux Christophe
** Last update Sun Nov 30 16:16:19 2014 Ploujoux Christophe
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include/my.h"

void	cryptage(char **argv, int *flag)
{
  int	size = my_strlen(argv[1]);
  int	i;
  int	*tab;
  int	*res;

  res = malloc(size*sizeof(int));
  tab = malloc(size*sizeof(int));
  tab = flag;
  i = 0;
  while (i <= size)
    {
      res[i] = (tab[i] * my_getnbr(argv[2])) + (tab[i + 1] * my_getnbr(argv[4]));
      res[i + 1] = (tab[i] * my_getnbr(argv[3])) + (tab[i + 1] * my_getnbr(argv[5]));
      i = i + 2;
    }
  i = 0;
  while (i <= size)
    {
      my_put_nbr_base(res[i], argv[6]);
      my_putchar(' ');
      i = i + 1;
    }
  printf("\n");
}
