/*
** function.c for function in /home/ploujo_c/rendu/unix/PSU_2014_minishell1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Jan 26 13:31:38 2015 Ploujoux Christophe
** Last update Wed Mar 11 17:42:40 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "include/my.h"

/*
**show the prompt and read the command that is enter
*/
char	*prompt_buffer(t_list *save)
{
  char	*buffer;
  int	a;
  char	*pwd;

  pwd = get_save(save, "PWD=");
  my_putstr(pwd);
  my_putstr("$>");
  buffer = x_malloc(sizeof (char) * 4096);
  if ((a = read(0, buffer, 4096)) < 0)
    return (NULL);
  buffer[a - 1] = '\0';
  return (buffer);
}

/*
**function for CTRL+C
*/
void	control_c()
{
  my_putstr("\n");
  my_putstr("$>");
}
