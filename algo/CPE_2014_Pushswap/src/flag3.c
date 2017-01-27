/*
** flag3.c for flag3 in /home/ploujo_c/rendu/unix/PSU_2014_my_printf
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Nov 15 10:24:02 2014 Ploujoux Christophe
** Last update Sun Nov 16 10:27:39 2014 Ploujoux Christophe
*/

#include <stdarg.h>
#include "my.h"

void	flag_p(va_list ap)
{
  my_putstr("0x7fff");
  my_put_nbr_x(va_arg(ap, int));
}

void	flag_i(va_list ap)
{
  my_put_nbr_s(va_arg(ap, int));
}

void	flag_S(va_list ap)
{
  my_putstr_S(va_arg(ap, char *));
}

void	flag_m()
{
  my_putstr("Success");
}
