/*
** key.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Feb 28 19:53:24 2015 Ploujoux Christophe
** Last update Thu Mar  5 06:58:08 2015 Ploujoux Christophe
*/

#include "include/my.h"
#include <stdio.h>
#include <string.h>

char	*bit_delete(char *str)
{
  while (my_strlen(str) < 8)
    str = my_strcat("0", str);
  str[my_strlen(str) - 1] = '\0';
  return (str);
}

char	*bit_add_delete(char *str, int i)
{
  while (my_strlen(str) < 4)
    str = my_strcat("0", str);
  if (i % 2 != 0)
    str[my_strlen(str) - 1] = '\0';
  return (str);
}

char	*key8_in_binary(char *key)
{
  int	i;
  char	*str;
  char	*str2;
  int	carac;

  i = 0;
  while (key[i])
    {
      carac = key[i];
      if (i == 0)
	{
	  str = convert_base(int_to_string(carac), "0123456789", "01");
	  str = bit_delete(str);
	}
      else
	{
	  str2 = convert_base(int_to_string(carac), "0123456789", "01");
	  str2 = bit_delete(str2);
	  str = my_strcat(str, str2);
	}
      i++;
    }
  return (str);
}

char	*key16_in_binary(char *key)
{
  int	i;
  char	*str;
  char	*str2;
  int	carac;

  i = 0;
  while (key[i])
    {
      carac = key[i] - '0';
      if (i == 0)
	{
	  str = convert_base(int_to_string(carac), "0123456789", "01");
	  while (my_strlen(str) < 4)
	    str = my_strcat("0", str);
	}
      else
	{
	  str2 = convert_base(int_to_string(carac), "0123456789", "01");
	  while (my_strlen(str2) < 4)
	    str2 = my_strcat("0", str2);
	  if (i % 2 != 0)
	    str2[my_strlen(str2) -1] = '\0';
	  str = my_strcat(str, str2);
	}
      i++;
    }
  return (str);
}

char	*key18_in_binary(char *key)
{
  int	i;
  char	*str;
  char	*str2;
  int	carac;

  i = 2;
  while (i < 18)
    {
      carac = key[i] - '0';
      if (i == 0)
	{
	  str = convert_base(int_to_string(carac), "0123456789ABCDEF", "01");
	  str = bit_add_delete(str, i);
	}
      else
	{
	  str2 = convert_base(int_to_string(carac), "0123456789ABCDEF", "01");
	  str2 = bit_add_delete(str2, i);
	  str = my_strcat(str, str2);
	}
      i++;
    }
  return (str);
}
