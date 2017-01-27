/*
** my.h for my in /home/ploujo_c/rendu/unix/PSU_2014_my_printf
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 14 12:59:05 2014 Ploujoux Christophe
** Last update Sun Nov 16 10:28:01 2014 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

void	flag_d(va_list ap);
void	flag_o(va_list ap);
void	flag_x(va_list ap);
void	flag_X(va_list ap);
void	flag_u(va_list ap);
void	flag_s(va_list ap);
void	flag_c(va_list ap);
void	flag_percent();
void	flag_b(va_list ap);
void	flag_p(va_list ap);
void	flag_i(va_list ap);
void	flag_S(va_list ap);
void	flag_m();
int	my_put_nbr(int nb);
int	my_put_nbr_o(unsigned int nb);
int	my_put_nbr_x(unsigned int nb);
int	my_put_nbr_X(unsigned int nb);
int	my_put_nbr_u(unsigned int nb);
int	my_put_nbr_s(signed int nb);
int	my_put_nbr_b(unsigned int nb);
int	my_putstr(char *str);
int	my_putstr_S(char *str);
int	my_putchar(char c);
char	*my_strcpy(char *dest, char *src);
void	init(void (*fct[14])(va_list));
int	my_printf(char *format, ...);

#endif /* MY_H_ */
