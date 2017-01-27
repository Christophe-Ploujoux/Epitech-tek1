/*
** main.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:55:52 2015 Ploujoux Christophe
** Last update Thu Jun  4 18:50:20 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "my.h"

/*
**get the command enter and execute it
*/
int	check_cmd(char **buffer, char *buffer2, t_list *save, char **env)
{
  int	exec;

  exec = 1;
  if ((exec = my_builtins(buffer, save, env, buffer2)) == -1)
    return (-1);
  if (exec != 0 && buffer[0][0] != '\0' &&
      (access(buffer[0] + 2, F_OK) == 0 || my_access(buffer, env) != NULL))
    exec = my_exec(buffer, env);
  if (exec != 0 && buffer[0][0] != '\0')
    {
      my_putstr(buffer[0]);
      my_putstr(": command not found\n");
    }
  return (0);
}

int		loop_shell(t_list *save, char **env)
{
  char		**buffer2;
  char		*buffer;
  char		**buffer3;
  int		i;

  while ((buffer = prompt_buffer(save)))
    {
      buffer2 = check_separator(buffer);
      i = 0;
      while (buffer2[i])
	{
	  if (check_redir(buffer2[i]) == 1)
	    redir(buffer2[i], save, env);
	  else
	    {
	      if (!(buffer3 = str_to_word_tab(buffer2[i], " \t")))
		return (-1);
	      if (check_cmd(buffer3, buffer2[i], save, env) == -1)
		return (-1);
	    }
	  i++;
	}
    }
  return (0);
}

int		my_shell(char **env)
{
  t_list	*save;

  save = init_list();
  save = my_env(save, env);
  if (loop_shell(save, env) == -1)
    return (-1);
  return (0);
}

int	main(int argc, char **argv, char **env)
{
  if (signal(SIGINT, control_c) == SIG_ERR)
    return (-1);
  if (argc == 1 && argv != NULL)
    {
      if (my_shell(env) == -1)
	return (-1);
    }
  return (0);
}
