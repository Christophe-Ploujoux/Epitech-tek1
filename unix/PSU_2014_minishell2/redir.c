/*
** redir.c for redir in /home/ploujo_c/rendu/unix/PSU_2014_minishell2
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Mar 13 13:09:32 2015 Ploujoux Christophe
** Last update Sun Mar 15 21:20:42 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void	redir_left(char *str, t_list *save, char **env)
{
  char	**cmd;
  int	fd;
  int	fd_tmp;
  char	**cmd2;
  char	**cmd3;

  cmd = str_to_word_tab(str, '<');
  cmd2 = str_to_word_tab(cmd[0], ' ');
  cmd3 = str_to_word_tab(cmd[1], ' ');
  if ((fd = open(cmd3[0], O_RDONLY | O_CREAT)) == - 1)
    exit(0);
  if ((fd_tmp = dup(0)) == -1)
    exit (0);
  if (dup2(fd, 0) == -1)
    exit(0);
  check_cmd(cmd2, cmd[0], save, env);
  if (dup2(fd_tmp, 0) == -1)
    exit(0);
  if (close(fd) == -1)
    exit(0);
  if (close(fd_tmp))
    exit(0);
}

void	redir_right(char *str, t_list *save, char **env)
{
  char	**cmd;
  int	fd;
  int	fd_tmp;
  char	**cmd2;
  char	**cmd3;

  cmd = str_to_word_tab(str, '>');
  cmd2 = str_to_word_tab(cmd[0], ' ');
  cmd3 = str_to_word_tab(cmd[1], ' ');
  if ((fd = open(cmd3[0], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR
		 | S_IRGRP | S_IWGRP | S_IROTH)) == - 1)
    exit(0);
  if ((fd_tmp = dup(1)) == -1)
    exit (0);
  if (dup2(fd, 1) == -1)
    exit(0);
  check_cmd(cmd2, cmd[0], save, env);
  if (dup2(fd_tmp, 1) == -1)
    exit(0);
  if (close(fd) == -1)
    exit(0);
  if (close(fd_tmp))
    exit(0);
}

void	redir_end_left()
{
  my_putstr("redirection << \n");
}

void	redir_end_right(char *str, t_list *save, char **env)
{
  char	**cmd;
  int	fd;
  int	fd_tmp;
  char	**cmd2;
  char	**cmd3;

  cmd = str_to_word_tab(str, '>');
  cmd2 = str_to_word_tab(cmd[0], ' ');
  cmd3 = str_to_word_tab(cmd[1], ' ');
  if ((fd = open(cmd3[0], O_CREAT | O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR
		 | S_IRGRP | S_IWGRP | S_IROTH)) == - 1)
    exit(0);
  if ((fd_tmp = dup(1)) == -1)
    exit (0);
  if (dup2(fd, 1) == -1)
    exit(0);
  check_cmd(cmd2, cmd[0], save, env);
  if (dup2(fd_tmp, 1) == -1)
    exit(0);
  if (close(fd) == -1)
    exit(0);
  if (close(fd_tmp))
    exit(0);
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
      i++;
    }
}
