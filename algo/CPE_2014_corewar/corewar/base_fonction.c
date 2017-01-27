/*
** base_fonction.c for bsq in /home/rieux-_t/Documents/rendu/Elem/CPE_2014_bsq
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Thu Jan 15 17:06:40 2015 thomas rieux-laucat
** Last update Sun Apr 12 22:24:15 2015 Ploujoux Christophe
*/

#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void    my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void    my_putnbr(int nb)
{
  if (nb >= 10)
    my_putnbr(nb / 10);
  if (nb < 0)
    {
      my_putchar('-');
      my_putnbr(-nb);
    }
  else
    my_putchar((nb % 10) + '0');
}
