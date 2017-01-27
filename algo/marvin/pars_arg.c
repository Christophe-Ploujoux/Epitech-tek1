/*
** pars_arg.c for pars_arg in /home/ploujo_c/rendu/prog-elem/marvin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Jan  3 15:40:48 2015 Ploujoux Christophe
** Last update Sun Jan  4 18:15:35 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <string.h>
#include "marvin.h"
#include "my.h"

t_list		*pars_function(char *str)
{
  char		*token;
  t_list	*list;

  list = init_list();
  if ((token = strtok(str, "(,);")) == NULL)
    return (NULL);
  while (token != NULL)
    {
      ad_before_racine(list, token);
      token = strtok(NULL, "(,);");
    }
  return (list);
}

int	ptr_count(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '*' || (str[i] == '[' && str[i + 1] == ']'))
	my_putstr("pointeur sur ");
      i++;
    }
  return (0);
}

int     jump_space(char *str, int i)
{
  while(str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
    i++;
  return (i);
}
