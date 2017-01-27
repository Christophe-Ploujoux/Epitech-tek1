/*
** case.c for case in /home/ploujo_c/rendu/prog-elem/marvin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Jan  4 13:34:05 2015 Ploujoux Christophe
** Last update Sun Jan  4 13:35:29 2015 Ploujoux Christophe
*/

#include "marvin.h"
#include "my.h"

int	function_or_variable(char *str, int i)
{
  while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
    i--;
  if (str[i] == ')')
    return (-1);
  else
    return (0);
  return (0);
}

int	function_or_pointer(char *str)
{
  int   i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '(' || str[i] == ')')
	j++;
      i++;
    }
  if (j > 2)
    return (1);
  if (j == 2)
    return (2);
  return (0);
}
