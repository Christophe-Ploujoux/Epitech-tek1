/*
** my_aff_revalpha.c for my_aff_revalpha in /home/ploujo_c/rendu/Piscine
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  2 19:34:19 2014 christophe ploujoux
** Last update Thu Oct  2 22:10:28 2014 christophe ploujoux
*/

int	my_aff_revalpha()
{
  char	c;

  c = 'z';
  while (c >= 'a')
    {
      my_putchar(c);
      c = c - 1;
    }
}
