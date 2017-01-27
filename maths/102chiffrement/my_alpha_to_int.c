/*
** crypt.c for crypt in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 13:52:54 2014 thomas rieux-laucat
** Last update Wed Nov 19 17:09:41 2014 thomas rieux-laucat
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

int	*get_flag(char *str)
{
  int   i;
  int   j;
  int   count_flag;
  int   len_str;
  int   *flag;
  char  alpha_ref[] = " abcdefghijklmnopqrstuvwxyz";

  i = 0;
  count_flag = 0;
  len_str = my_strlen(str);
  flag  = malloc(len_str*sizeof(int));
  while (str[i] != '\0')
  {
    j = 0;
    while (alpha_ref[j] != '\0')
      {
	if (alpha_ref[j] == str[i])
	  {
	    flag[count_flag] = j;
	    count_flag += 1;
	  }
	j += 1;
      }
    i += 1;
  }
  return (flag);
}
