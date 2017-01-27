/*
** struct.c for my_mastermind in /home/ploujo_c/rendu/colle-4-BA67
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May 18 20:12:40 2015 christophe ploujoux
** Last update Mon May 18 22:02:19 2015 christophe ploujoux
*/

#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char	*my_random_code()
{
  char	*str;

  if ((str = malloc(sizeof(char) * 5)) == NULL)
    return (NULL);
  if (rand() % 6 == 0)
    str = my_strcpy(str, "0354");
  else if (rand() % 6 == 1)
    str = my_strcpy(str, "7123");
  else if (rand() % 6 == 2)
    str = my_strcpy(str, "2457");
  else if (rand() % 6 == 3)
    str = my_strcpy(str, "0123");
  else if (rand() % 6 == 4)
    str = my_strcpy(str, "4175");
  else
    str = my_strcpy(str, "3162");
  return (str);
}

int	*my_pions()
{
  int	*pion;
  int	i;

  if ((pion = malloc(sizeof(int) * 8)) == NULL)
    return (NULL);
  i = 0;
  while (i < 8)
    {
      pion[i] = i;
      i++;
    }
  return (pion);
}

t_par	init_par(char **argv, int argc)
{
  t_par	par;

  srand(time(NULL));
  par.try = 10;
  par.slots = 4;
  if (argc > 1 && my_strcmp(argv[3], "-t") == 0)
    par.try = getnbr(argv[4]);
  if (argc > 1 && my_strcmp(argv[5], "-s") == 0)
    par.slots = getnbr(argv[6]);
  par.code = my_random_code();
  if (argc > 1 && my_strcmp(argv[1], "-c") == 0
      && my_strlen(argv[2]) == par.slots)
    par.code = my_strdup(argv[2]);
  par.pions = my_pions();
  par.charpion = malloc(sizeof(char) * 8);
  par.charpion = my_strcpy(par.charpion, "01234567");
  return (par);
}

t_res	init_res()
{
  t_res	res;

  res.yes = 0;
  res.no = 0;
  return (res);
}
