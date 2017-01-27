/*
** my_power_rec.c for my_power_rec in /home/ploujo_c/rendu/Piscine_C_J05
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Oct  5 22:57:29 2014 christophe ploujoux
** Last update Mon Oct  6 17:54:06 2014 christophe ploujoux
*/

int	my_power_rec(int nb, int power)
{
  int	i;

  i = 0;
  if (power == 0)
    {
      return (1);
    }
  if (power < 0)
    {
      return (0);
    }
  else
    {
      i = nb * my_power_rec(nb, power - 1);
      return (i);
    }
}
