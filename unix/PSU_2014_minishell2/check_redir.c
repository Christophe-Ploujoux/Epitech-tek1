/*
** check_redir.c for check_redir in /home/ploujo_c/rendu/unix/PSU_2014_minishell2
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Mar 14 12:00:04 2015 Ploujoux Christophe
** Last update Sat Mar 14 12:03:16 2015 Ploujoux Christophe
*/

#include "include/my.h"

int	check_redir(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i])
    {
      if (buffer[i] == '<' || buffer[i] == '>')
	return (1);
      i++;
    }
  return (0);
}
