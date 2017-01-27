/*
** my_putnbr_base.c for my_putnbr_base in /home/rieux-_t/Documents/rendu/PSU_2014_my_printf
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Thu Nov 13 17:01:47 2014 thomas rieux-laucat
** Last update Thu Apr  9 15:15:25 2015 
*/

#include "include/asm.h"

void	my_putnbr_base(unsigned int nb, char *base)
{
  if (nb != 0)
    {
      my_putnbr_base((nb / my_strlen(base)), base);
      my_putchar(base[(nb % my_strlen(base))]);
    }
}
