/*
** my_strcat.c for my_strcat in /home/ploujo_c/rendu/Piscine_C_J07
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct  8 11:22:24 2014 christophe ploujoux
** Last update Wed Oct  8 17:26:58 2014 christophe ploujoux
*/

char	*strcat_bis(char *dest, char *src)
{
  int	i;
  int	nb;

  i = 0;
  nb = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[nb + i] = src[i];
      i = i + 1;
    }
  dest[nb + i] = '\0';
  return (dest);
}
