/*
** my_display2.c for my_display2 in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Nov 30 13:10:11 2014 Ploujoux Christophe
** Last update Sun Nov 30 13:17:04 2014 Ploujoux Christophe
*/

#include "include/my.h"

void		my_total(int i)
{
  struct dirent	*lec;
  struct stat	sb;
  DIR		*rep;

  rep = opendir(".");
  while ((lec = readdir(rep)) != NULL)
    {
      if (lec->d_name[0] != '.')
	{
	  if (stat(lec->d_name, &sb) == -1)
	    my_putstr("Erreur\n");
	  i = i + sb.st_blocks;
	}
    }
  my_printf("total %d\n", i / 2);
}
