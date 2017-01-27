/*
** my_strncpy.c for my_strncpy in /home/ploujo_c/rendu/Piscine_C_J06/ex_02
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Oct  6 23:01:32 2014 christophe ploujoux
** Last update Tue Oct  7 17:25:28 2014 christophe ploujoux
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	a;
  
  a = 0;
  while (dest[a] != '\0' && a < n)
    {
      dest[a] = src[a];
      a = a + 1;
    }
  while (a >= n && dest[a] != '\0')
    {
      dest[a] = '\0';
      a = a + 1;
    }
  return (dest);
}
