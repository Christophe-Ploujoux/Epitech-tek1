/*
** main.c for my_reader in /home/ploujo_c/rendu/colle-1_P3WCR
**
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
**
** Started on  Mon Apr 27 19:11:10 2015 Ploujoux Christophe
** Last update Mon Apr 27 21:31:50 2015 Ploujoux Christophe
*/

#include "reader.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int	item = 0;

void		aff(char *str)
{
  if (my_strcmp(str + count_space(str), "<item>") == 0)
    {
      ++item;
      item_number(item);
    }
  if (my_strncmp(str + count_space(str), "<title>", 7) == 0)
    title(str);
  if (my_strncmp(str + count_space(str), "<link>", 7) == 0)
    my_link(str);
}

void	parsing(int fd)
{
  char	*str;

  while ((str = get_next_line(fd)) != NULL)
    {
      aff(str);
      if (my_strcmp(str + count_space(str), "<description>") == 0)
	{
	  str = get_next_line(fd);
	  my_putstr("Description: ");
	  my_putstr(str + count_space(str));
	  my_putchar('\n');
	}
    }
}

int	main(int ac, char **av)
{
  char	*str;
  int	fd;
  int	i;

  i = 1;
  while (av[i])
    {
      item = 0;
      file_name(av[i]);
      fd = open(av[i], O_RDONLY);
      parsing(fd);
      close(fd);
      i++;
    }
  return (0);
}
