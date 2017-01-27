/*
** my_factorielle_it.c for my_factorielle_it in /home/ploujo_c/rendu/Piscine_C_J05
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Oct  5 18:44:24 2014 christophe ploujoux
** Last update Mon Oct  6 17:49:03 2014 christophe ploujoux
*/

int	my_factorielle_it(int nb)
{
  int	i;

  i = nb - 1;
  if (nb > 12 && nb < 0)
    {
      return (0);
    }
  while (i > 1)
    {
      nb = nb * i;
      i = i - 1;
    }
  return (nb);
}
