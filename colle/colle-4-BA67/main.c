/*
** main.c for mastermind in /home/ploujo_c/rendu/colle-4-BA67
**
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
**
** Started on  Mon May 18 18:58:23 2015 christophe ploujoux
** Last update Mon May 18 22:27:27 2015 christophe ploujoux
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char	*recup_buffer()
{
  char	*buffer;
  int	rd;

  if ((buffer = malloc(sizeof(char) * 42)) == NULL)
    exit(0);
  if ((rd = read(0, buffer, 42)) <= 0)
    exit(0);
  buffer[rd - 1] = '\0';
  return (buffer);
}

int	main(int argc, char **argv)
{
  t_par	par;
  t_res	res;

  if (argc == 2)
    return (1);
  par = init_par(argv, argc);
  res = init_res();
  if (mastermind(par, res) == 0)
    my_putstr("Bravo ! Tu es le meilleur du monde mon gars !\n");
  else
    my_putstr("Dommage ! Retente ta chance\n");
  free_struct(par);
  return (0);
}
