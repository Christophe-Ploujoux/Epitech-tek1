/*
** echo.c for  in
**
** Made by Manase Rakotomalala
** Login   <rakoto_m@epitech.net>
**
** Started on  Thu May 21 11:38:04 2015 Manase Rakotomalala
** Last update Sun May 24 18:48:36 2015 Ploujoux Christophe
*/

#include "my.h"

void	classic_echo(char **buffer)
{
  int	i;

  i = number_option(buffer);
  while (buffer[i + 1])
    {
      aff_class(buffer[i]);
      my_putchar(' ');
      i++;
    }
  aff_class(buffer[i]);
}

void	option_echo(char **buffer)
{
  int	i;

  i = number_option(buffer);
  while (buffer[i + 1])
    {
      my_putstr(buffer[i]);
      my_putchar(' ');
      i++;
    }
  my_putstr(buffer[i]);
}

void	my_echo(char **buffer)
{
  int	i;

  if (buffer[1] == NULL)
    {
      my_putchar('\n');
      return;
    }
  i = 0;
  while (buffer[i])
    {
      if (my_strcmp(buffer[i], "-e") == 0)
	option_echo(buffer);
      else if (my_strcmp(buffer[i], "-E") == 0)
	classic_echo(buffer);
      i++;
    }
  if (number_option(buffer) == 1 || my_strcmp(buffer[1], "-n") == 0)
    classic_echo(buffer);
  opt_n(buffer);
}
