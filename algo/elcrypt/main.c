/*
** main.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Feb 27 20:40:33 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:48:54 2015 Ploujoux Christophe
*/

#include <stdio.h>
#include "include/my.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	my_putchar(char c, int fd)
{
  write(fd, &c, 1);
}

int	main(int ac, char **av)
{
  int	fd1;
  char	*str;
  FILE	*fd2;
  char	*key;

  if (check_cmd(ac, av) == 0)
    {
      fd1 = find_fd1(ac, av);
      fd2 = find_fd2(ac, av);
      key = find_key(ac, av);
      if (fd1 < 0 || fd2 == NULL)
	{
	  printf("One of the file doesn't exist, please create it\n");
	  return (-1);
	}
      while ((str = get_next_eight(fd1)) != NULL)
	{
	  if (find_mod(av) == 2)
	    cryptage(str, fd2, key);
	  if (find_mod(av) == 1)
	    decryptage(str, fd2, key);
	  free(str);
	}
    }
  else
    {
      printf("USAGE : ./elcrypt [MODE] -f [Name Source File] -o [Result File] -k [KEY]\n");
      return (-1);
    }
  return (0);
}
