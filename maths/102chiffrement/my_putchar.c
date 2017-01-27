/*
** my_putchar.c for my_putchar in /home/ploujo_c/rendu/Piscine_C_J07/lib/my
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Oct  7 22:47:08 2014 christophe ploujoux
** Last update Wed Nov 26 09:38:09 2014 Ploujoux Christophe
*/

#include "include/my.h"
#include <unistd.h>

void	my_putchar(char c)
{
  write (1, &c, 1);
}
