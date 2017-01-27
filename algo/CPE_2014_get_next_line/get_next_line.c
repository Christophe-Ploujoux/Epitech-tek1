/*
** get_next_line.c for get_next_line in /home/ploujo_c/rendu/prog-elem/CPE_2014_get_next_line
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 21 11:24:51 2014 Ploujoux Christophe
** Last update Mon Dec 15 14:21:56 2014 Ploujoux Christophe
*/

#include <stdio.h>
#include "get_next_line.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

char		*get_next_line(const int fd)
{
  int		i;
  int		ret;
  char		buffer[BUF_SIZE];
  char		*str;

  if ((ret = read(fd, buffer, BUF_SIZE)) == -1)
    {
      my_putstr("read error\n");
      return (NULL);
    }
  buffer[ret] = '\0';
  my_putstr(buffer);
  return (NULL);
}

int	main()
{
  char	*s;

  while ((s = get_next_line(0)))
    {
      my_putstr(s);
      my_putchar('\n');
      free(s);
    }
  return (0);
}
