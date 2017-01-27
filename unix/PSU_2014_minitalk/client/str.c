/*
** str.c for str in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 14:32:31 2015 Ploujoux Christophe
** Last update Tue Mar 17 03:34:08 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <unistd.h>

int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    {
      my_putstr("Erreur\n");
      exit (-1);
    }
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
