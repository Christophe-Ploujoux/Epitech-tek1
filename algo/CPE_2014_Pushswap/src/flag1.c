/*
** flag1.c for flag1 in /home/ploujo_c/rendu/unix/PSU_2014_my_printf
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 14 11:44:01 2014 Ploujoux Christophe
** Last update Sun Nov 16 10:09:17 2014 Ploujoux Christophe
*/

#include <stdarg.h>
#include "my.h"

void	flag_d(va_list ap)
{
  int	nb;

  nb = va_arg(ap, int);
  my_put_nbr(nb);
}

void	flag_o(va_list ap)
{
  my_put_nbr_o(va_arg(ap, int));
}

void	flag_x(va_list ap)
{
  my_put_nbr_x(va_arg(ap, int));
}

void	flag_X(va_list ap)
{
  my_put_nbr_X(va_arg(ap, int));
}

void	flag_u(va_list ap)
{
  my_put_nbr_u(va_arg(ap, int));
}
