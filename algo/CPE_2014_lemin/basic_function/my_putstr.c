/*
** my_putstr.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 18:30:04 2015 Ploujoux Christophe
** Last update Sun May  3 18:30:04 2015 Ploujoux Christophe
*/

#include "header.h"

void	my_putstr(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    {
      my_putchar(str[c]);

      c = c + 1;
    }
}
