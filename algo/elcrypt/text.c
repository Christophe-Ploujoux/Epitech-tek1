/*
** text.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Feb 28 20:55:54 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:13:37 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"
#include <string.h>

char	**string_split(char *str)
{
  int	i;
  char	**split;

  i = 0;
  split = my_xmalloc(sizeof (char *) * 3);
  split[0] = my_xmalloc(sizeof (char) * 5);
  split[1] = my_xmalloc(sizeof (char) * 5);
  while (i < 4)
    {
      split[0][i] = str[i];
      i++;
    }
  split[0][i] = '\0';
  split[1][3] = '\0';
  split[1] = str + i;
  split[2] = NULL;
  return (split);
}

char	*bit_add(char *str)
{
  while (my_strlen(str) < 8)
    str = my_strcat("0", str);
  return (str);
}

char	*string_in_binary(char *string)
{
  int	i;
  char	*str;
  char	*str2;
  int	carac;

  i = 0;
  while (string[i])
    {
      carac = string[i];
      if (i == 0)
	{
	  str = convert_base(int_to_string(carac), "0123456789", "01");
	  str = bit_add(str);
	}
      else
	{
	  str2 = convert_base(int_to_string(carac), "0123456789", "01");
	  str2 = bit_add(str2);
	  str = my_strcat(str, str2);
	}
      i++;
    }
  return (str);
}
