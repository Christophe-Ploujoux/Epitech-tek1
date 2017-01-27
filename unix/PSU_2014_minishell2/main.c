/*
** my_wait.c for my_wait in /home/ploujo_c/rendu/unix/tp_minishell
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 21 11:04:11 2015 Ploujoux Christophe
** Last update Sun Mar 15 21:30:31 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "include/my.h"

/*
**get the command enter and execute it
*/
void	check_cmd(char **buffer, char *buffer2, t_list *save, char **env)
{
  int	exec;

  exec = 1;
  exec = my_builtins(buffer, save, env, buffer2);
  if (exec != 0 && buffer[0][0] != '\0' &&
      (access(buffer[0] + 2, F_OK) == 0 || my_access(buffer, env) != NULL))
    exec = my_exec(buffer, env);
  if (exec != 0 && buffer[0][0] != '\0')
    {
      my_putstr(buffer[0]);
      my_putstr(": command not found\n");
    }
}

int		my_shell(char **env)
{
  char		**buffer;
  char		*buffer2;
  char		**buffer3;
  t_list	*save;
  int		i;

  save = init_list();
  save = my_env(save, env);
  while ((buffer2 = prompt_buffer(save)))
    {
      buffer = str_to_word_tab(buffer2, ';');
      i = 0;
      while (buffer[i])
	{
	  if (check_redir(buffer[i]) == 1)
	    redir(buffer[i], save, env);
	  else
	    {
	      buffer3 = str_to_word_tab(buffer[i], ' ');
	      check_cmd(buffer3, buffer[i], save, env);
	    }
	  i++;
	}
    }
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
  return(0);
}
