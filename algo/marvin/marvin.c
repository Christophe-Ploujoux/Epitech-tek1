/*
** marvin.c for marvin in /home/ploujo_c/rendu/prog-elem/marvin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jan  2 21:54:25 2015 Ploujoux Christophe
** Last update Sun Jan  4 18:01:25 2015 Ploujoux Christophe
*/

#include <string.h>
#include "marvin.h"
#include "my.h"

int	aff_called(char *str)
{
  int	i;

  i = 0;
  i = jump_space(str, i);
  while (str[i] != '\0' && (str[i] != ' ' && str[i] != '\t'))
    i++;
  while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
    i++;
  if (str[i] == '\0')
    return (1);
  else
    my_putstr(" nomme");
  return (0);
}

int		marvin(char *str, int i)
{
  while (i >= 0 && str[i] != ';')
    i--;
  if (i > 0 && str[i] == ';' && function_or_variable(str, i - 1) == -1)
    {
      if (function_or_pointer(str) == 2)
	aff_func(str);
      if (function_or_pointer(str) == 1)
	aff_func_ptr(str);
      my_putchar('.');
    }
  else if (i > 0 && str[i] == ';' && function_or_variable(str, i - 1) == 0)
    {
       my_putstr("Declaration de la variable de type ");
      ptr_count(str);
      var_type(str);
      my_putchar(' ');
      my_putstr("nomme");
      aff_var_name(str);
      my_putchar('.');
    }
  else
    my_putstr("Rentrer une decalration de variable/fonction valide.");
  my_putchar('\n');
  return (0);
}
