/*
** transform.c for corewar in /home/rieux-_t/Projets/Modules/Elem/CPE_2014_corewar/asm
** 
** Made by 
** Login   <rieux-_t@epitech.net>
%** 
** Started on  Thu Apr  9 15:16:16 2015 
** Last update Sun Apr 12 22:43:44 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include "include/asm.h"

int	register_function(char *arg, int fd)
{
  int	registre;

  registre = my_getnbr(arg + 1);
  if (registre <= 9)
    fd_putstr("0x0", fd);
  else
    fd_putstr("0x", fd);
  my_putnbr_base(registre, "0123456789abcdef");
  return (0);
}

int	live_function(char *arg, int fd)
{
  int	live;

  live = my_getnbr(arg + 1);
  if (live <= 9)
    fd_putstr("0x00,0x00,0x00,0x0", fd);
  else
    fd_putstr("0x00,0x00,0x00,0x", fd);
  my_putnbr_base(live , "0123456789abcdef");
  return (0);
}

int	unlive_function(char *arg, int fd)
{
  int	unlive;

  unlive = my_getnbr(arg);
  if (unlive <= 9)
    fd_putstr("0x00,0x0", fd);
  else
    fd_putstr("0x00,0x", fd);
  my_putnbr_base(unlive, "0123456789abcdef");
  return (0);
}

int	check_bin(char *tab, char *arg, int fd)
{
  if (my_strcmp(tab, "01") == 0)
    {
      register_function(arg, fd);
      return (0);
    }
  if (my_strcmp(tab, "10") == 0)
    {
      live_function(arg, fd);
      return (0);
    }
  if (my_strcmp(tab, "11") == 0)
    {
      unlive_function(arg, fd);
      return (0);
    }
  return (1);
}

void	transform(char *str, char **arg, int fd)
{
  char	**tab;
  int	i;

  i = 0;
  tab = str_to_word_tab(str, " ");
  while (arg[i])
    {
      check_bin(tab[i], arg[i], fd);
      if (i + 1 != size_tab(arg) && i != size_tab(tab))
	fd_putstr(",", fd);
      i++;
    }
  fd_putstr("\n", fd);
}
