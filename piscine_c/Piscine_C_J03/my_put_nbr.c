/*
** test0.c for test 0 in /home/ploujo_c
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Oct  2 14:59:19 2014 christophe ploujoux
** Last update Thu Oct  2 23:02:49 2014 christophe ploujoux
*/

int	my_put_nbr(int nb)
{
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr(nb = nb * -1);
    }
  else
    {
      my_putchar((nb % 10) + 48);
    }
  return(0);
}
