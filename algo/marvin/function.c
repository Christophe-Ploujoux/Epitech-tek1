/*
** func_param.c for func_param.c in /home/ploujo_c/rendu/prog-elem/marvin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Jan  3 19:21:36 2015 Ploujoux Christophe
** Last update Sun Jan  4 18:00:21 2015 Ploujoux Christophe
*/

#include "marvin.h"
#include "my.h"
#include <stdlib.h>

void	aff_var_list(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
    i--;
  while (i > 0 && (str[i] != ' ' && str[i] != '\t'))
    i--;
  while (str[i] != '\0' && (str[i] != ' ' || str[i] != '\t'))
    {
      if (str[i] != '*' && str[i] != '[' && str[i] != ']')
	my_putchar(str[i]);
      i++;
    }
}

void	aff_func_name(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '*')
	i++;
      my_putchar(str[i]);
      i++;
    }
}

int	loop_list(t_list *list, t_list *tmp)
{
  while (tmp != list)
    {
      if (tmp->data == NULL)
	return (-1);
      ptr_count(tmp->data);
      var_type(tmp->data);
      if (aff_called(tmp->data) == 0)
	aff_var_list(tmp->data);
      my_putstr(" et ");
      tmp = tmp->prev;
    }
  return (0);
}

int		aff_func(char *str)
{
  t_list	*list;
  t_list	*tmp;

  if ((list = pars_function(str)) == NULL)
    return (-1);
  tmp = list;
  tmp = tmp->prev;
  my_putstr("Declaration de la fonction ");
  aff_var_list(tmp->data);
  tmp = tmp->prev;
  my_putstr(" prenant en parametre ");
  loop_list(list, tmp);
  my_putstr("renvoyant ");
  ptr_count(list->prev->data);
  var_type(list->prev->data);
  free_list(list);
  return (0);
}

int		aff_func_ptr(char *str)
{
  t_list	*list;
  t_list	*tmp;

  if ((list = pars_function(str)) == NULL)
    return (-1);
  tmp = list;
  tmp = tmp->prev;
  if (tmp->prev->data == NULL)
    return (-1);
  my_putstr("Declaration du ");
  ptr_count(tmp->prev->data);
  my_putstr("fonction ");
  aff_func_name(tmp->prev->data);
  tmp = tmp->prev;
  my_putstr(" qui prend ");
  var_type(tmp->prev->data);
  tmp = tmp->prev->prev;
  my_putstr(" en paramètre et renvoyant une fonction qui prend en parametre ");
  if (loop_list(list, tmp) == -1)
    return (-1);
  my_putstr("renvoyant ");
  var_type(list->prev->data);
  free_list(list);
  return (0);
}
