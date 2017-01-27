/*
** exec.c for exec in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Jan 27 14:53:08 2015 Ploujoux Christophe
** Last update Sun Feb  1 02:21:38 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "include/my.h"

/*
**find the path of the binary entered in command
*/
char	*my_access(char **buffer, char **env)
{
  char	**tab;
  char	*str;
  int	i;

  i = 0;
  str = get_env(env, "PATH=");
  tab = str_to_word_tab(str, ':');
  tab = cat_tab(tab, buffer);
  while (tab[i])
    {
      if (access(tab[i], F_OK) == 0)
	return (tab[i]);
      i++;
    }
  return (NULL);
}

/*
**execute our binary
*/
int	my_exec(pid_t pid, char **buffer, char **env)
{
  char	*str;
  int	i;

  i = 0;
  if (buffer[0][0] == '\0')
    return (-1);
  str = my_access(buffer, env);
  if ((pid = fork()) == -1)
    return (-1);
  if (pid == 0)
    {
      if (my_strncmp(buffer[0], "./", 2) == 0
	  && access(buffer[0] + 2, F_OK) == 0)
	execve(buffer[0], buffer, env);
      else
	execve(str, buffer, env);
      exit(0);
    }
  else
    wait(&pid);
  return (0);
}
