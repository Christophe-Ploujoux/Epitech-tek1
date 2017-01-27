/*
** my_strcpy.c for my_strcpy in /home/ploujo_c/rendu/Piscine_C_J06/ex_01
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Oct  6 19:41:57 2014 christophe ploujoux
** Last update Sat Nov 15 19:41:36 2014 Ploujoux Christophe
*/

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  return (dest);
}
