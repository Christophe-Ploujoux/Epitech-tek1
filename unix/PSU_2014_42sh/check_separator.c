/*
** check_separator.c for check_separator in /home/perina_e/PSU_2014_42sh
** 
** Made by eric perina
** Login   <perina_e@epitech.net>
** 
** Started on  Wed May 13 14:58:16 2015 eric perina
** Last update Thu Jun  4 18:47:15 2015 Ploujoux Christophe
*/

#include "my.h"

char	**check_separator(char *buffer)
{
  int	i;
  char	**buffer2;

  i = 0;
  buffer2 = NULL;
  while (buffer[i])
    {
      if (buffer[i] == '&' && buffer[i + 1] == '&')
	return (str_to_word_tab(buffer, "&"));
      else if (buffer[i] == '|' && buffer[i + 1] == '|')
	{
	  buffer2 = str_to_word_tab(buffer, "|");
	  buffer2[1] = NULL;
	  return (buffer2);
	}
      else if (buffer[i] == ';')
	return (str_to_word_tab(buffer, ";"));
      i++;
    }
  buffer2 = str_to_word_tab(buffer, ";");
  return (buffer2);
}
