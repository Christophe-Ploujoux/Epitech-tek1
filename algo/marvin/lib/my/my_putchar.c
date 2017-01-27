/*
** my_putchar.c for my_putchar.c in 
** 
** Made by Sebastien BOULOC
** Login   <bouloc_s@epitech.net>
** 
** Started on  Fri Jan  2 20:22:53 2015 Sebastien BOULOC
** Last update Fri Jan  2 20:41:19 2015 Sebastien BOULOC
*/

#include <unistd.h>

int	my_putchar(char c)
{
  if (write(1, &c, 1) == (-1))
    return (-1);
  return (0);
}
