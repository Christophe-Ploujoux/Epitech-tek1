/*
** my_isneg.c for my_iseg in /home/ploujo_c/rendu/Piscine_C_J03
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct  1 11:32:02 2014 christophe ploujoux
** Last update Thu Oct  2 22:13:27 2014 christophe ploujoux
*/

int     my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
}
