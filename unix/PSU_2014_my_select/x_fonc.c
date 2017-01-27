/*
** x_fonc.c for x_fonc in /home/ploujo_c/rendu/unix/PSU_2014_my_select
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan  7 19:50:22 2015 Ploujoux Christophe
** Last update Sat Jan 10 20:40:05 2015 Ploujoux Christophe
*/

#include <sys/ioctl.h>
#include <termios.h>
#include <stdlib.h>
#include <term.h>
#include <curses.h>
#include <unistd.h>
#include "include/my.h"

int	x_tput(char *str, int nb, int my_putchr(int))
{
  if (tputs(str, nb, my_putchr) == -1)
    return (-1);
  return (0);
}

void	*x_malloc(void * ptr, int size)
{
  ptr = malloc(sizeof(ptr) * size);
  if (ptr == NULL)
    return (NULL);
  return (ptr);
}
