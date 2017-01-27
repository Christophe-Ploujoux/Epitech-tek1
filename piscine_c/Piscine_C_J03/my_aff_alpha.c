/*
** my_aff_alpha.c for my_aff_alpha in /home/ploujo_c/rendu/Piscine
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  2 19:41:04 2014 christophe ploujoux
** Last update Thu Oct  2 22:21:23 2014 christophe ploujoux
*/

int	my_aff_alpha()
{
  char	b;

  b = 'a';
  while (b <= 'z')
    {
      my_putchar(b);
      b = b + 1;
    }
}
