/*
** main.c for server in /home/ploujo_c/rendu/unix/PSU_2014_minitalk/server
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Mar 17 03:34:35 2015 Ploujoux Christophe
** Last update Sun Mar 22 10:40:38 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <stdlib.h>

void		function(int signum)
{
  char		str[8];
  static int	i;

  if (i == 8)
    i = 0;
  if (signum == SIGUSR1)
    str[i] = '0';
  else if (signum == SIGUSR2)
    str[i] = '1';
  i = i + 1;
  if (i == 7)
    my_putchar(my_getnbr_base(my_revstr(str), "01"));
}

int	main()
{
  my_putstr("Processus ID = ");
  my_put_nbr(getpid());
  my_putchar('\n');
  if (signal(SIGUSR1, function) == SIG_ERR)
    return (-1);
  if (signal(SIGUSR2, function) == SIG_ERR)
    return (-1);
  while (42)
    pause();
  return (0);
}
