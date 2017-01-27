/*
** utils.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Apr 28 16:55:59 2015 Ploujoux Christophe
** Last update Wed May  6 13:00:39 2015 Ploujoux Christophe
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include "header.h"

int	len_line(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

int	count_line()
{
  int	i;
  char	*str;
  int	fd;

  i = 0;
  if ((fd = open("lemin", O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR
                 | S_IRGRP | S_IWGRP | S_IWUSR)) == -1)
    my_putstr("Open error\n");
  while ((str = get_next_line(0)))
    {
      if (i == 0 && my_get_nbr(str) <= 0)
	{
	  my_putstr("Use a files with the right syntax, or there must be 1 ant\n");
	  exit(0);
	}
      write(fd, str, my_strlen(str));
      write(fd, "\n", 1);
      i++;
    }
  close(fd);
  return (i);
}

char	**recup_file(char *str)
{
  char	**tab;
  int	i;
  int	line;
  int	fd;

  line = count_line();
  fd = open("lemin", O_RDONLY);
  tab = x_malloc(sizeof(char *) * (line + 1));
  i = 0;
  while ((str = get_next_line(fd)))
    {
      tab[i] = my_strdup(str);
      i++;
    }
  tab[i] = NULL;
  close(fd);
  return (tab);
}

void	aff_list(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}

int	ant(char **pars)
{
  int	nb_ant;

  nb_ant = (my_get_nbr(pars[0]));
  return (nb_ant);
}
