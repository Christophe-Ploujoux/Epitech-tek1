/*
** my_wait.c for my_wait in /home/ploujo_c/rendu/unix/tp_minishell
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 21 11:04:11 2015 Ploujoux Christophe
** Last update Sun Feb  1 02:27:19 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "include/my.h"

/*
**get the command enter and execute it (my minishell1)
*/
int		my_shell(char **env)
{
  char		**buffer;
  pid_t		pid;
  char		*buffer2;
  t_list	*save;
  int		check;
  int		exec;

  save = my_env(save, env);
  while (buffer2 = prompt_buffer(save))
    {
      exec = 1;
      buffer = str_to_word_tab(buffer2, ' ');
      check = my_builtins(buffer, save, env, buffer2);
      if (check != 0 && buffer[0][0] != '\0' &&
	  (access(buffer[0] + 2, F_OK) == 0 || my_access(buffer, env) != NULL))
	exec = my_exec(pid, buffer, env);
      if (exec != 0 && check != 0 && buffer[0][0] != '\0')
	{
	  my_putstr(buffer[0]);
	  my_putstr(": command not found\n");
	}
    }
}

int	main(int argc, char **argv, char **env)
{
  if (signal(SIGINT, control_c) == SIG_ERR)
    return (-1);
  my_shell(env);
  return(0);
}
