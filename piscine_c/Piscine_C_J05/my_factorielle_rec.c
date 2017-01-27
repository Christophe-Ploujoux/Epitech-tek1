/*
** my_factorielle_rec.c for my_factorielle_rec in /home/ploujo_c/rendu/Piscine_C_J05
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Oct  5 22:19:20 2014 christophe ploujoux
** Last update Mon Oct  6 17:46:36 2014 christophe ploujoux
*/

int     my_factorielle_rec(int nb)
{
  int   i;

  i = 0;
  if (nb < 0 || nb > 12)
    {
      return (0);
    }
  if (nb == 1)
    {
      i = 1;
      return (i);
    }
  else
    {
      i = nb * my_factorielle_rec(nb - 1);
      return (i);
    }
}
