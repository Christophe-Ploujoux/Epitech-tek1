/*
** aff.c for my_reader in /home/ploujo_c/rendu/colle-1_P3WCR
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Apr 27 21:02:49 2015 Ploujoux Christophe
** Last update Mon Apr 27 21:19:55 2015 Ploujoux Christophe
*/

#include "reader.h"

void	file_name(char *str)
{
  my_putstr("\nFilename : ");
  my_putstr(str);
  my_putstr("\n\n");
}

void	item_number(int	i)
{
  my_putstr("Numero item: ");
  my_put_nbr(i);
  my_putchar('\n');
}

void	title(char *str)
{
  my_putstr("Title: ");
  aff_title(str);
}

void	my_link(char *str)
{
  my_putstr("Link: ");
  aff_title(str);
}

void	aff_title(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '>')
    i++;
  i = i + 1;
  while (str[i] != '<')
    {
      my_putchar(str[i]);
      i++;
    }
  my_putchar('\n');
}

