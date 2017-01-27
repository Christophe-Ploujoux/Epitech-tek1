/*
** key_rot.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Mar  1 16:27:24 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:12:33 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdio.h>
#include <string.h>

char	*key_rotate(char *key)
{
  char	*str;

  str = my_xmalloc(5 * sizeof(char));
  strncpy(str, key, 4);
  str[4] = '\0';
  key = my_strcat(key + 4, str);
  return (key);
}

char	*key_gen(char *key_prime, int n)
{
  char	*key_sec;
  int	i;

  i = 0;
  key_sec = key_prime;
  while (n >= 1 && i < n)
    {
      key_sec = key_rotate(key_sec);
      i++;
    }
  return (key_sec + 24);
}
