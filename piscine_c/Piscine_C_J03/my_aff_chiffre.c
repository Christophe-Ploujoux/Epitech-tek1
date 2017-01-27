/*
** my_aff_chiffre.c for my_aff_chiffre in /home/ploujo_c/rendu/Piscine
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  2 19:27:43 2014 christophe ploujoux
** Last update Thu Oct  2 22:12:30 2014 christophe ploujoux
*/

int	my_aff_chiffre()
{
  char	c;

  c = '0';
  while (c <= '9')
    {
      my_putchar(c);
      c = c + 1;
    }
}
