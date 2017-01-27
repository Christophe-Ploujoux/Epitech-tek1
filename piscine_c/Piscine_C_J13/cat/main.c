/*
** main.c for main in /home/ploujo_c/rendu/Piscine_C_J13
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct 23 11:26:49 2014 christophe ploujoux
** Last update Thu Oct 23 19:05:45 2014 christophe ploujoux
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
  int	fd;
  char	buffer[32001];
  int	count;

  count = 1;
  while (count < argc)
    {
      fd = open(argv[count], O_RDONLY | ENOTDIR);
      if (fd == -1)
	{
	  my_putstr("cat: ");
	  my_putstr(argv[count]);
	  my_putstr(": No such file or directory\n");
	}
      else
	{
	  read(fd, buffer, 32000);
	  my_putstr(buffer);
	  close(fd);
	}
      count = count + 1;
    }
  return (0);
}
