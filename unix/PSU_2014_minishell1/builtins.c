/*
** builtins.c for builtins in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Jan 27 15:03:36 2015 Ploujoux Christophe
** Last update Sun Feb  1 02:29:07 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "include/my.h"

/*
**recode of the builtin setenv, it adds or changes a variable in
**the environnement
*/
t_list	*my_setenv(char *buffer, t_list *save, char **env)
{
  int	i;
  char	*cpy;

  save = save;
  i = 0;
  while (buffer[i])
    {
      if (buffer[i] == ' ')
	buffer[i] = '=';
      i++;
    }
  ad_before_racine(save, buffer + 7);
  return (save);
}

/*
**recode of the unsetenv command that deletes
**a variable from our environnement
*/
int		my_unsetenv(char **buffer, t_list *save, char **env)
{
  int		i;
  t_list	*tmp;

  i = 0;
  tmp = save->prev;
  while (env[i++])
    tmp = tmp->prev;
  while (tmp != save)
    {
      if (my_strncmp(tmp->data, buffer[1], my_strlen(buffer[1])) == 0)
	{
	  tmp->next->prev = tmp->prev;
	  tmp->prev->next = tmp->next;
	  free(tmp);
	}
      tmp = tmp->prev;
    }
}

/*
**shows our environnement
*/
t_list	*my_env(t_list *save, char **env)
{
  int	i;

  i = 0;
  save = init_list();
  while (env[i])
    ad_before_racine(save, env[i++]);
  return (save);
}

int	my_builtins(char **buffer, t_list *save, char **env, char *buffer2)
{
  int	n;

  n = 0;
  if ((n = my_strcmp(buffer2, "exit")) == 0)
    my_exit(buffer, save, buffer2);
  else if ((n = my_strcmp(buffer[0], "cd")) == 0)
    my_cd(buffer, save);
  else if ((n = my_strcmp(buffer2, "env")) == 0)
    my_show_list(save);
  else if ((n = my_strcmp(buffer[0], "setenv")) == 0)
    save = my_setenv(buffer2, save, env);
  else if ((n = my_strcmp(buffer[0], "unsetenv")) == 0)
    my_unsetenv(buffer, save, env);
  else
    n = 1;
  return (n);
}
