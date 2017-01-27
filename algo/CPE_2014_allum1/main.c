/*
** main.c for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Feb 11 10:58:29 2015 Ploujoux Christophe
** Last update Fri Feb 20 19:47:35 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/my.h"

int	allum_number(char *str)
{
  int	i;
  int	n;

  i = 0;
  n = 0;
  while (str[i])
    {
      if (str[i] == '|')
	n++;
      i++;
    }
  return (n);
}

void	aff_rules()
{
  color_str("\n\nWelcome to the game: allum1\n\n", CYAN);
  color_str("The rules are simple:", CYAN);
  color_str("\n\t-let 1 matches after your turn to win the game\n", CYAN);
  color_str("\t-you can pick as much matches you want from the same line\n", CYAN);
  color_str("\t-enter 2 numbers, the first one for the line ", CYAN);
  color_str("and the second for how much", CYAN);
  color_str(" matches you want to remove from this line\n", CYAN);
  color_str("\t-if you want to exit just enter \"quit\"\n\n", CYAN);
}

int	my_allum(int size)
{
  char	**buffer;
  char	**al;
  int	*nb;

  aff_rules();
  al = tab(al, size);
  aff_tab(al);
  while (buffer = str_to_word_tab(prompt(), ' '))
    {
      if ((nb = number(buffer)) == NULL)
	return (-1);
      if (strcmp(buffer[0], "quit") == 0)
	my_exit(buffer, al, nb);
      if (check(buffer, nb, al, size) == 1);
      else
	{
	  al = tab_modif(al, nb[0], nb[1]);
	  aff_tab(al);
	  winner(al, buffer, nb);
	  ia(al, nb, size, buffer);
	}
      free(nb);
      free_tab(buffer);
    }
  return (0);
}

int	main(int argc, char **argv)
{
  if (argc == 1)
    {
      if (my_allum(4) == -1)
	return (-1);
    }
  else if (argc == 2 && my_str_isnum(argv[1]) == 0
	   && my_get_nbr(argv[1]) > 1)
    {
      if (my_allum(my_get_nbr(argv[1])) == -1)
	return (-1);
    }
  else
    {
      my_putstr("You have too write 1 argument ./allum1 [number >= 2]\n");
      return (1);
    }
  return (0);
}
