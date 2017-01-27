 /*
** my_xmalloc.c for xmalloc in /home/rene_a/Documents/CPE_2014_bsq
** 
** Made by Arthur Rene
** Login   <rene_a@epitech.net>
** 
** Started on  Fri Jan 16 19:44:38 2015 Arthur Rene
** Last update Sun Mar  1 21:17:19 2015 Ploujoux Christophe
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "include/my.h"

void	*my_xmalloc(int t)
{
  char	*chaine_a_malloc;

  chaine_a_malloc = malloc(t);
  if (chaine_a_malloc  == NULL)
    {
      printf("MON MALLOC C'EST UNE LOCK ET IL FAIL !!\n");
      exit(1);
    }
  return (chaine_a_malloc);
}
