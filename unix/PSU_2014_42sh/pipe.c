/*
** pipe.c for 42sh in /home/ploujo_c/rendu/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Jun  5 02:30:07 2015 Ploujoux Christophe
** Last update Fri Jun  5 03:50:06 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"

int	my_pipe(char **cmd, char **env)
{
  int	fd[2];
  pid_t	pid;
  char	**cmd2;
  char	**cmd3;

  cmd2 = str_to_word_tab(cmd[0], " \t");
  cmd3 = str_to_word_tab(cmd[1], " \t");
  if (pipe(fd) == -1)
    return (-1);
  if ((pid = fork()) == -1)
    return (-1);
  else if (pid == 0)
    {
      close(fd[1]);
      dup2(fd[0], 0);
      my_exec_pipe(cmd3, env);
    }
  else
    {
      close(fd[0]);
      dup2(fd[1], 1);
      my_exec_pipe(cmd2, env);
    }
  return (0);
}

int	the_pipe(char *str, char **env)
{
  pid_t	pid;
  char	**cmd;

  cmd = str_to_word_tab(str, "|");
  pid = fork();
  if (pid == 0)
    my_pipe(cmd, env);
  else
    {
      wait(&pid);
      usleep(1000);
    }
  return (0);
}
