/*
** my_check.c for my_check.c in 
** 
** Made by Sebastien BOULOC
** Login   <bouloc_s@epitech.net>
** 
** Started on  Sat Jan  3 12:57:26 2015 Sebastien BOULOC
** Last update Sun Jan  4 17:16:30 2015 Ploujoux Christophe
*/

#include "my.h"

int	check_semicolon(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ';')
	count++;
      i++;
    }
  if (count > 1)
    {
      my_putstr("La chaine de caractère ne doit contenir que un seul ';'\n");
      return (-1);
    }
  i--;
  while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
    i--;
  if (str[i] == ';')
    return (0);
  my_putstr("La chaine de caractère doit finir par un ';'\n");
  return (-1);
}

int     check_parenth(char *str)
{
  int   i;
  int   count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '(')
        count++;
      if (str[i] == ')')
        count--;
      i++;
    }
  if (count != 0)
    {
      my_putstr("Probleme de parenthese.\n");
      return (-1);
    }
  return (0);
}

int	check_num_word(char *str)
{
  int	i;

  i = 0;
  while (str[i] != ';')
    i++;
  i--;
  while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
    i--;
  while (i > 0 && str[i] != ' ' && str[i] != '\t')
    i--;
  while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
    i--;
  if (i == 0)
    {
      my_putstr("Le programme prend au moins deux mots.\n");
      return (-1);
    }
  return (0);
}

int	my_check(int ac, char **av)
{
  if (ac != 2)
    {
      my_putchar('\n');
      return (1);
    }
  if ((check_semicolon(av[1])) == -1)
    return (1);
  if ((check_parenth(av[1])) == -1)
    return (1);
  if ((check_num_word(av[1])) == -1)
    return (1);
  return (0);
}
