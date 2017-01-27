/*
** my_swap.c for my_swap in /home/ploujo_c/rendu/Piscine_C_J04
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  2 21:08:52 2014 christophe ploujoux
** Last update Fri Oct  3 11:02:17 2014 christophe ploujoux
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
