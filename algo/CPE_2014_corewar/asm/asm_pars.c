/*
** asm_pars.c for corewar in /home/rieux-_t/Projets/Modules/Elem/CPE_2014_corewar
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Apr  1 02:35:16 2015 thomas rieux-laucat
** Last update Sun Apr 12 22:45:51 2015 Ploujoux Christophe
*/

#include <sys/stat.h>
#include <fcntl.h>
#include "include/asm.h"

char	**create_op_code()
{
  char	*optab;
  char	**op_tab;
  int	fd;

  optab = NULL;
  op_tab = NULL;
  if ((fd = open("op_code", O_RDONLY)) == -1)
    {
      my_putstr("Error can't find op_code file\n");
      exit (1);
    }
  optab = get_next_line(fd);
  op_tab = str_to_word_tab(optab, ",");
  return (op_tab);
}

char	**create_instruction()
{
  char	*intab;
  char	**in_tab;
  int	fd;

  if ((fd = open("ins_code", O_RDONLY)) == -1)
    {
      my_putstr("Error can't find ins_code file\n");
      exit (1);
    }
  while ((intab = get_next_line(fd)))
    in_tab = str_to_word_tab(intab, ",");
  return (in_tab);
}

int	convert_instruction()
{
  return (0);
}
