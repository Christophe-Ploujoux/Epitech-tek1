/*
** str.c for opt_get in /home/ploujo_c/rendu/colle-2_Kaki1
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May  4 19:18:31 2015 christophe ploujoux
** Last update Mon May  4 20:05:32 2015 christophe ploujoux
*/

#include <unistd.h>

void	my_putchar(char c)
{
  (void)write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  (void)write(1, str, my_strlen(str));
}

void	aff_tab(char **tab)
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

int	size_tab(char *tab[])
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}
