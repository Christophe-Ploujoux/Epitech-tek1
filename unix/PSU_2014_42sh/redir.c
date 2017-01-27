/*
** redir.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:56:09 2015 Ploujoux Christophe
** Last update Fri Jun  5 03:50:32 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "my.h"

int	redir_left(char *str, t_list *save, char **env)
{
  char	**cmd;
  int	fd;
  int	fd_tmp;
  char	**cmd2;
  char	**cmd3;

  cmd = str_to_word_tab(str, "<");
  cmd2 = str_to_word_tab(cmd[0], " \t");
  cmd3 = str_to_word_tab(cmd[1], " \t");
  if ((fd = open(cmd3[0], O_RDONLY | O_CREAT)) == - 1)
    {
      my_putstr("Open problem\n");
      return (-1);
    }
  if ((fd_tmp = dup(0)) == -1)
    return (-1);
  if (dup2(fd, 0) == -1)
    return (-1);
  check_cmd(cmd2, cmd[0], save, env);
  if (dup2(fd_tmp, 0) == -1)
    return (-1);
  close(fd);
  close(fd_tmp);
  return (0);
}

int	redir_right(char *str, t_list *save, char **env)
{
  char	**cmd;
  int	fd;
  int	fd_tmp;
  char	**cmd2;
  char	**cmd3;

  cmd = str_to_word_tab(str, ">");
  cmd2 = str_to_word_tab(cmd[0], " \t");
  cmd3 = str_to_word_tab(cmd[1], " \t");
  if ((fd = open(cmd3[0], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR
		 | S_IRGRP | S_IWGRP | S_IROTH)) == - 1)
    {
      my_putstr("Open problem\n");
      return (-1);
    }
  if ((fd_tmp = dup(1)) == -1)
    my_putstr("Open problem\n");
  if (dup2(fd, 1) == -1)
    return (-1);
  check_cmd(cmd2, cmd[0], save, env);
  if (dup2(fd_tmp, 1) == -1)
    return (-1);
  close(fd);
  close(fd_tmp);
  return (0);
}

void	redir_end_left()
{
  my_putstr("redirection << \n");
}

int	redir_end_right(char *str, t_list *save, char **env)
{
  char	**cmd;
  int	fd;
  int	fd_tmp;
  char	**cmd2;
  char	**cmd3;

  cmd = str_to_word_tab(str, ">");
  cmd2 = str_to_word_tab(cmd[0], " \t");
  cmd3 = str_to_word_tab(cmd[1], " \t");
  if ((fd = open(cmd3[0], O_CREAT | O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR
		 | S_IRGRP | S_IWGRP | S_IROTH)) == - 1)
    {
      my_putstr("Open problem\n");
      return (-1);
    }
  if ((fd_tmp = dup(1)) == -1)
    return (-1);
  if (dup2(fd, 1) == -1)
    return (-1);
  check_cmd(cmd2, cmd[0], save, env);
  if (dup2(fd_tmp, 1) == -1)
    return (-1);
  close(fd);
  close(fd_tmp);
  return (0);
}

void	redir(char *str, t_list *save, char **env)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '>' && str[i + 1] == '>')
	redir_end_right(str, save, env);
      else if (str[i] == '<' && str[i + 1] == '<')
	redir_end_left();
      else if (str[i] == '>' && str[i - 1] != '>')
	redir_right(str, save, env);
      else if (str[i] == '<' && str[i - 1] != '<')
	redir_left(str, save, env);
      else if (str[i] == '|' && str[i - 1] != '|')
	the_pipe(str, env);
      i++;
    }
}
