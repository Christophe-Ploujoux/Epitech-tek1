/*
** var_func.c for var_func in /home/ploujo_c/rendu/prog-elem/marvin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Jan  3 18:25:16 2015 Ploujoux Christophe
** Last update Sun Jan  4 17:58:20 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "marvin.h"
#include "my.h"

void	aff_var(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != ';' && str[i])
    i++;
  while (i >= 0 && (str[i] == ' ' || str[i] == '\t'))
    i--;
  while (i >= 0 && str[i] != ' ' && str[i] != '\t')
    i--;
  while (i > 0)
    {
      if (str[j] != '*')
	my_putchar(str[j]);
      i--;
      j++;
    }
  my_putchar(' ');
}

int	var_type(char *str)
{
  if (str == NULL)
    return (-1);
  if (my_strncmp(str, "char", 4) == 0)
    my_putstr("un caractere");
  else if (my_strncmp(str, "int", 3) == 0)
    my_putstr("un entier");
  else if (my_strncmp(str, "float", 4) == 0)
    my_putstr("une virgule flotante");
  else if (my_strncmp(str, "long", 4) == 0)
    my_putstr("un entier long");
  else if (my_strncmp(str, "short", 5) == 0)
    my_putstr("un entier court");
  else if (my_strncmp(str, "double", 5) == 0)
    my_putstr("un réel");
  else if (my_strncmp(str, "void", 4) == 0)
    my_putstr("rien");
  else if (my_strncmp(str, "unsigned", 8) == 0)
    my_putstr("un non signe");
  else if (my_strncmp(str, "bool", 4) == 0)
    my_putstr("un booleen");
  else
    aff_var(str);
  return (0);
}

void	aff_var_name(char *str)
{
  int	i;

  i = 0;
  while (str[i] != ';')
    i++;
  i--;
  while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
    i--;
  while (i > 0 && (str[i] != ' ' && str[i] != '\t'))
    i--;
  while (str[i] != ';' && (str[i] != ' ' || str[i] != '\t'))
    {
      if (str[i] != '*' && str[i] != '[' && str[i] != ']')
	my_putchar(str[i]);
      i++;
    }
}
