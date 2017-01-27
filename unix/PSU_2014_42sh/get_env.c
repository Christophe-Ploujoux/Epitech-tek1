/*
** get_env.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:55:41 2015 Ploujoux Christophe
** Last update Sun May 24 15:55:42 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "my.h"

/*
** allow us to get the variable from the env
*/
char	*get_env(char **env, char *name)
{
  int	i;

  i = 0;
  if (env == NULL)
    return (NULL);
  while (env[i])
    {
      if (my_strncmp(env[i], name, my_strlen(name)) == 0)
	return (env[i] + my_strlen(name));
      i++;
    }
  return (NULL);
}

/*
** allow us to get the variable from the list which contains env
*/
char		*get_save(t_list *save, char *name)
{
  t_list	*tmp;

  tmp = save->prev;
  if (tmp == NULL)
    return (NULL);
  while (tmp != save)
    {
      if (my_strncmp(tmp->data, name, my_strlen(name)) == 0)
	return (tmp->data + my_strlen(name));
      tmp = tmp->prev;
    }
  return (NULL);
}
