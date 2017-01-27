/*
** decrypt.c for decrypt in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Mon Nov 24 16:21:54 2014 thomas rieux-laucat
** Last update Wed Nov 26 17:28:27 2014 thomas rieux-laucat
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "include/my.h"
#include <math.h>

float	*get_flag_base(char *str_code, char *argv)
{
  int	i;
  int	len_str;
  float	*flag_decode;
  const char s[260] = " ";
  char	*token;
  
  i = 0;
  len_str = my_strlen_space(str_code);
  token = strtok(str_code, s);
  flag_decode = malloc(len_str*sizeof(int));
  while (token != NULL)
    { 
      flag_decode[i] = my_getnbr_base(token, argv);
      token = strtok(NULL, s);
      i++;
    }
  return (flag_decode);
}
