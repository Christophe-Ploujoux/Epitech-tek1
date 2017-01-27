/*
** base_fonction.c for bsq in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_bsq
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Thu Jan 15 17:06:40 2015 thomas rieux-laucat
** Last update Sun Apr 12 22:27:54 2015 Ploujoux Christophe
*/

#include <unistd.h>
#include <stdlib.h>
#include "include/asm.h"

void	fd_putchar(char c, int fd)
{
  write(fd, &c, 1);
}

void	fd_putstr(char *str, int fd)
{
  write(fd, str, my_strlen(str));
}

void	*x_malloc(size_t n)
{
  char	*tab;

  tab = malloc(n);
  if (tab == NULL)
    {
      my_putstr("Error with malloc\n");
      exit(EXIT_FAILURE);
    }
  return (tab);
}
