/*
** my_strlen.c for my_strlen in /home/ploujo_c/rendu/Piscine_C_J04
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Oct  3 15:51:04 2014 christophe ploujoux
** Last update Fri Oct  3 23:27:51 2014 christophe ploujoux
*/

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] > 0)
    {
      n = n + 1;
    }
  my_putchar(n + '0');
}
