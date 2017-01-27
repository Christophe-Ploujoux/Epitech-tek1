/*
** check_redir.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:55:19 2015 Ploujoux Christophe
** Last update Fri Jun  5 02:52:10 2015 Ploujoux Christophe
*/

#include "my.h"

int	check_redir(char *buffer)
{
  int	i;

  i = 0;
  while (buffer[i])
    {
      if (buffer[i] == '<' || buffer[i] == '>' || buffer[i] == '|')
	return (1);
      i++;
    }
  return (0);
}
