/*
** prompt.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:56:01 2015 Ploujoux Christophe
** Last update Sun May 24 15:56:02 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "my.h"

/*
**show the prompt and read the command that is enter
*/
char	*prompt_buffer(t_list *save)
{
  char	*buffer;
  char	*pwd;

  pwd = get_save(save, "PWD=");
  my_putstr(pwd);
  my_putstr("$>");
  if (!(buffer = get_next_line(0)))
    return (NULL);
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
