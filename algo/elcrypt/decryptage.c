/*
** decryptage.c for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Mar  1 18:31:45 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:42:35 2015 Ploujoux Christophe
*/

#include <stdio.h>
#include "include/my.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*decrypt_word(char *src, char *key)
{
  int	i;
  char	*save;
  char	*save_key;
  char	**tab;
  char	*str;

  i = 8;
  tab = string_split(src);
  tab[GAUCHE] = string_in_binary(tab[GAUCHE]);
  tab[DROITE] = string_in_binary(tab[DROITE]);
  save = my_xmalloc(sizeof (char) * (my_strlen(tab[DROITE]) + 1));
  while (i > 0)
    {
      save_key = key_gen(key, i);
      save = strcpy(save, tab[DROITE]);
      tab[DROITE] = xor(tab[DROITE], save_key);
      tab[DROITE] = xor(tab[DROITE], tab[GAUCHE]);
      tab[GAUCHE] = strcpy(tab[GAUCHE], save);
      i--;
    }
  str = my_strcat(tab[GAUCHE], tab[DROITE]);
  return (str);
}

char	*decrypt_mode(char *src, char *key)
{
  char	*tab;

  if (my_strlen(key) == 8)
    tab = decrypt_word(src, key8_in_binary(key));
  else if (my_strlen(key) == 16)
    tab = decrypt_word(src, key16_in_binary(key));
  else if (my_strlen(key) == 18)
    tab = decrypt_word(src, key18_in_binary(key));
  else
    tab = decrypt_word(src, key);
  return (tab);
}

void	decryptage(char *src, FILE *fd, char *key)
{
  char	*tab;
  int	*save;
  int	i;

  i = 0;
  tab = decrypt_mode(src, key);
  save = char_in_int(tab);
  while (i < 8)
    {
      fputc(save[i], fd);
      i++;
    }
}
