/*
** cryptage.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Mar  1 17:01:47 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:30:51 2015 Ploujoux Christophe
*/

#include <stdio.h>
#include "include/my.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*crypt_word(char *src, char *key)
{
  int	i;
  char	*save;
  char	*save_key;
  char	**tab;
  char	*str;

  i = 0;
  tab = string_split(src);
  tab[GAUCHE] = string_in_binary(tab[GAUCHE]);
  tab[DROITE] = string_in_binary(tab[DROITE]);
  save = my_xmalloc(sizeof (char) * (my_strlen(tab[DROITE]) + 1));
  while (i < 8)
    {
      save_key = key_gen(key, i);
      save = strcpy(save, tab[DROITE]);
      tab[DROITE] = xor(tab[DROITE], save_key);
      tab[DROITE] = xor(tab[DROITE], tab[GAUCHE]);
      tab[GAUCHE] = strcpy(tab[GAUCHE], save);
      i++;
    }
  str = my_strcat(tab[GAUCHE], tab[DROITE]);
  return (str);
}

int	*char_in_int(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;
  int	*save;

  i = 0;
  j = 0;
  tab = my_xmalloc(sizeof (char *) * 9);
  save = my_xmalloc(sizeof (int) * 8);
  while (i < 8)
    {
      k = 0;
      tab[i] = malloc(sizeof (char) * 9);
      while (k < 8)
	{
	  tab[i][k] = str[j];
	  k++;
	  j++;
	}
      tab[i][k] = '\0';
      save[i] = my_getnbr_base(tab[i], "01");
      i++;
    }
  tab[i] = NULL;
  return (save);
}

void	cryptage(char *src, FILE *fd, char *key)
{
  char	*tab;
  int	*save;
  int	i;

  i = 0;
  tab = crypt_word(src, key8_in_binary(key));
  save = char_in_int(tab);
  while (i < 8)
    {
      fputc(save[i], fd);
      i++;
    }
}
