/*
** my_strncat.c for my_strncat in /home/ploujo_c/rendu/Piscine_C_J07/ex_02
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct  8 17:38:47 2014 christophe ploujoux
** Last update Wed Oct  8 19:34:59 2014 christophe ploujoux
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	longueur;

  i = 0;
  longueur = my_strlen(dest);
  while (src[i] != '\0' && i < nb)
    {
      dest[longueur + i] = src[i];
      i = i + 1;
    }
  dest[longueur + i] = '\0';
  return (dest);
}
