/*
** my_putnbr.c for my_putnbr in /home/ploujo_c/rendu/Piscine_C_J04
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Oct  3 11:57:11 2014 christophe ploujoux
** Last update Fri Oct  3 15:05:09 2014 christophe ploujoux
*/

int	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] > 0)
    {
      my_putchar(str[n]);
      n = n + 1;
    }
}
