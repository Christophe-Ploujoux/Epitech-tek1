/*
** exit.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:54:33 2015 Ploujoux Christophe
** Last update Sun May 24 15:54:34 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "my.h"

/*
**recode of the builtin exit.
**Free our different variables used in the shell
*/
void	my_exit(char **buffer, t_list *save, char *buffer2)
{
  free_list(save);
  my_free_tab(buffer);
  free(buffer2);
}
