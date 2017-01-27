/*
** my_putchar.c for my_putchar in /home/ploujo_c/rendu/Piscine_C_J07/lib/my
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Oct  7 22:47:08 2014 christophe ploujoux
** Last update Sat Nov 15 18:15:00 2014 Ploujoux Christophe
*/

#include "my.h"
#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
