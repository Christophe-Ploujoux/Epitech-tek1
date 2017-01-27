/*
** fonction.c for fonction in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 13:59:01 2014 thomas rieux-laucat
** Last update Sun Nov 30 16:50:48 2014 Ploujoux Christophe
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int     check_arg(char **av)
{
  int   i;

  i = 2;
  while (i < 6)
    {
      if (my_str_isnum(av[i]) == 1)
        {
          printf("Impossible l'un des éléments de la matrice n'est pas un entier\n");
          return (1);
        } 
      i += 1;
    }
  return (0);
}

int     msg_error(int ac)
{
  if (ac > 8)
    {
      printf("Oups.. il y a trop d'arguments.\n");
      return (1);
    }
  if (ac < 8)
    {
      printf("Oups.. il n'y a pas assez d'arguments.\n");
      return (1);
    }
  return (0);
}

int	check_sentence(char **argv)
{
  int	i;

  i = 0;
  while(argv[1][i])
    {
      if ((argv[1][i] < 61 && argv[1][i] != ' ')  || argv[1][i] > 122)
	{
	  printf("Erreur un caractère ne fait pas parti de l'alphabet.\n");
	  return (1);
	}
      i = i + 1;
    }
  return (0);
}

int	check_base(char **argv)
{
  if (my_strlen(argv[6]) <= 1)
    {
      printf("La base est trop courte\n");
      return (1);
    }
  return (0);
}

int	check_mode(char **argv)
{
  if (my_strlen(argv[7]) > 1 || my_str_isnum(argv[7]) == 1)
    {    
      printf("Ceci n'est pas un mode de chiffrement ou de déchiffrement.\n0: chiffrement, 1: déchiffrement\n");
      return (1);
    } 
  return (0);
}
