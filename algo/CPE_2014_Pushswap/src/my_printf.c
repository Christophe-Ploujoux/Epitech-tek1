/*
** my_printf.c for my_printf in /home/ploujo_c/rendu/unix/PSU_2014_my_printf
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 28 18:00:01 2014 Ploujoux Christophe
** Last update Wed Dec 10 19:18:28 2014 Ploujoux Christophe
*/

#include <stdarg.h>
#include <stdio.h>
#include "my.h"

void	init(void (*fct[12])(va_list))
{
  fct[0] = &flag_d;
  fct[1] = &flag_i;
  fct[2] = &flag_o;
  fct[3] = &flag_x;
  fct[4] = &flag_X;
  fct[5] = &flag_u;
  fct[6] = &flag_b;
  fct[7] = &flag_s;
  fct[8] = &flag_c;
  fct[9] = &flag_percent;
  fct[10] = &flag_p;
  fct[11] = &flag_S;
  fct[12] = &flag_m;
}

int		my_printf(char *format, ...)
{
  va_list	ap;
  int		i;
  int		count;
  char		*flag;
  void		(*fct[12])(va_list);

  va_start(ap, format);
  init(fct);
  i = 0;
  flag = "dioxXubsc%pSm";
  while (format[i] != '\0')
    {
      count = 0;
      while (flag[count] != '\0')
	{
	  if (format[i] == '%' && format[i + 1] == flag[count])
	    {
	      fct[count](ap);
	      i = i + 2;
	    }
	  count = count + 1;
	}
      my_putchar(format[i]);
      i = i + 1;
    }
  va_end(ap);
  return (0);
}
