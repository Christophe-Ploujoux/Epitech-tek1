/*
** echo_base.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 18:43:05 2015 Ploujoux Christophe
** Last update Sun May 24 18:45:09 2015 Ploujoux Christophe
*/

#include "my.h"

int	number_option(char **buffer)
{
  int	i;
  int	n;

  i = 0;
  n = 1;
  while (buffer[i])
    {
      if (my_strcmp(buffer[i], "-e") == 0 || my_strcmp(buffer[i], "-n") == 0
	  || my_strcmp(buffer[i], "-E") == 0)
	n++;
      i++;
    }
  return (n);
}

void	aff_class(char *buffer)
{
  int	j;

  j = 0;
  while (buffer[j])
    {
      if (buffer[j] == '\\')
	my_putchar('\\');
      else if (buffer[j] == '\"');
      else
	my_putchar(buffer[j]);
      j++;
    }
}

void	opt_n(char **buffer)
{
  int	i;

  i = 0;
  while (buffer[i])
    {
      if (my_strcmp(buffer[i], "-n") == 0)
	return;
      i++;
    }
  my_putchar('\n');
}
