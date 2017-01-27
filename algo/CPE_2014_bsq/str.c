/*
** str.c for str in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 14:32:31 2015 Ploujoux Christophe
** Last update Thu Jan 15 15:56:58 2015 Ploujoux Christophe
*/

#include <stdlib.h>

int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    my_putstr("Erreur\n");
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void	*my_memcpy(char *dest, char *src, int n)
{
  char	*d;
  char	*s;

  d = dest;
  s = src;
  while (n--)
    *d++ = *s++;
  return (dest);
}

int	my_getnbr(char *str)
{
  int	nb;
  int	signe;
  int	pos;

  nb = 0;
  pos = 0;
  signe = 1;
  while (str[pos] == '-')
    {
      signe = signe * -1;
      pos = pos + 1;
    }
  while (str[pos] != '\0')
    {
      if (str[pos] < '0' || str[pos] > '9')
	return (nb * signe);
      nb = nb * 10 + (str[pos] - '0');
      pos = pos + 1;
    }
  return (nb * signe);
}
