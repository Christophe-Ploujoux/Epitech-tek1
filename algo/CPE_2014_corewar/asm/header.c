/*
** header.c for asm in /home/ploujo_c/rendu/prog-elem/CPE_2014_corewar/asm
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Apr 10 14:13:58 2015 Ploujoux Christophe
** Last update Sat Apr 11 11:53:16 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/asm.h"

char	*get_name(char **tab)
{
  int	i;
  char	*str;

  i = 0;
  str = NULL;
  if (tab[0] == NULL);
  else if (my_strncmp(tab[0], ".name", 5) == 0)
    {
      i = 1;
      while (tab[i])
	{
	  if (i == 1)
	    str = my_strdup(tab[i]);
	  else
	    {
	      str = my_strcat(str, " ");
	      str = my_strcat(str, tab[i]);
	    }
	  i++;
	}
    }
  return (str);
}

char	*get_comment(char **tab)
{
  int	i;
  char	*str;

  i = 0;
  str = NULL;
  if (tab[0] == NULL);
  else if (my_strncmp(tab[0], ".comment", 8) == 0)
    {
      i = 1;
      while (tab[i])
	{
	  if (i == 1)
	    str = my_strdup(tab[i]);
	  else
	    {
	      str = my_strcat(str, " ");
	      str = my_strcat(str, tab[i]);
	    }
	  i++;
	}
    }
  return (str);
}

header_t	create_header(char *name, char *comment)
{
  int		i;
  header_t	head;

  i = 0;
  head.magic = COREWAR_EXEC_MAGIC;
  head.prog_size = 2;
  while (name[i] && name[i] != '.')
    {
      head.prog_name[i] = name[i];
      i++;
    }
  i = 0;
  while (comment[i])
    {
      head.comment[i] = comment[i];
      i++;
    }
  return (head);
}
