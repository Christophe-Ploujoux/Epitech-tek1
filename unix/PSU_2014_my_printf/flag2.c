/*
** flag2.c for flag2 in /home/ploujo_c/rendu/unix/PSU_2014_my_printf
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 14 15:35:19 2014 Ploujoux Christophe
** Last update Sat Nov 15 18:10:12 2014 Ploujoux Christophe
*/

#include <stdarg.h>
#include "my.h"

void	flag_b(va_list ap)
{
  my_put_nbr_b(va_arg(ap, int));
}

void	flag_s(va_list ap)
{
  my_putstr(va_arg(ap, char *));
}

void	flag_c(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void	flag_percent()
{
  my_putchar('%');
}
