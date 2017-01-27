/*
** xor.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Feb 28 22:16:13 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:13:50 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdio.h>
#include <string.h>

char	*xor(char *a, char *b)
{
  char	*xor;
  int	i;

  xor = my_xmalloc(sizeof (char) * (my_strlen(a) + 1));
  i = 0;
  while (a[i])
    {
      if ((a[i] == '1' && b[i] == '1') || (a[i] == '0' && b[i] == '0'))
        xor[i] = '0';
      if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1'))
	xor[i] = '1';
      i++;
    }
  xor[i] = '\0';
  return (xor);
}
