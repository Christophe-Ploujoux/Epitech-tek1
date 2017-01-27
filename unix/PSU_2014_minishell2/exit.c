/*
** exit.c for exit in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 28 19:06:20 2015 Ploujoux Christophe
** Last update Sun Feb  1 02:24:45 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "include/my.h"

/*
**recode of the builtin exit.
**Free our different variables used in the shell
*/
void	my_exit(char **buffer, t_list *save, char *buffer2)
{
  free_list(save);
  my_free_tab(buffer);
  free(buffer2);
  exit(EXIT_SUCCESS);
}
