/*
** my_revstr.c for my_revstr in /home/ploujo_c/rendu/Piscine_C_J06/ex_03
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Oct  6 23:46:52 2014 christophe ploujoux
** Last update Tue Oct  7 17:26:03 2014 christophe ploujoux
*/

char	*my_revstr(char *str)
{
  int	n;
  int	a;
  char	swap;
  
  n = 0;
  a = 0;
  while (str[n] != '\0')
    {
      n = n + 1;
    }
  n = n - 1;
  while (a < n)
    {
      swap = str[n];
      str[n] = str[a];
      str[a] = swap;
      a = a + 1;
      n = n - 1;
    }
  return (str);
}
