/*
** main.c for client in /home/ploujo_c/rendu/unix/PSU_2014_minitalk/client
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Mar 17 03:41:49 2015 Ploujoux Christophe
** Last update Wed Mar 25 10:08:37 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int	loop(int j, int i, int save, char *str, int pid)
{
  save = str[j];
  i = 0;
  while (i < 8)
    {
      if (save % 2 == 0)
	{
	  if (kill(pid, SIGUSR1) == -1)
	    return (-1);
	}
      else
	if (kill(pid, SIGUSR2) == -1)
	  return (-1);
      save = save / 2;
      i++;
      usleep(1200);
    }
  return (0);
}

int	kill_action(int pid, char *str)
{
  int	i;
  int	save;
  int	j;

  j = 0;
  save = 0;
  i = 0;
  while (str[j])
    {
      if (loop(j, i, save, str, pid) == -1)
	return (-1);
      j++;
    }
  return (0);
}

int	main(int argc, char **argv)
{
  if (argc != 3)
    {
      my_putstr("U have to write 2 arguments: [Server's PID] [STRING]\n");
      return (-1);
    }
  else
    if (kill_action(my_getnbr(argv[1]), argv[2]) == -1)
      return (-1);
  return (0);
}
