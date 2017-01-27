/*
** win_or_lose.c for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Feb 17 16:54:42 2015 Ploujoux Christophe
** Last update Fri Feb 20 19:14:04 2015 Ploujoux Christophe
*/

#include "include/my.h"

void	winner(char **tab, char **buffer, int *nb)
{
  if (tab_count(tab) == 1)
    {
      color_str("\nYOU WON CONGRATS\n\n", YELLOW);
      my_exit(buffer, tab, nb);
    }
  if (tab_count(tab) == 0)
    {
      color_str("You should have been more aware\n", RED);
      color_str("\nYOU LOST\n\n", RED);
      my_exit(buffer, tab, nb);
    }
}

void	loser(char **tab, char **buffer, int *nb)
{
  if (tab_count(tab) == 1)
    {
      color_str("\nYOU LOST TOO BAD\n\n", RED);
      my_exit(buffer, tab, nb);
    }
}
