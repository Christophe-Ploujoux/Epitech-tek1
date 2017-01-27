/*
** my_aff_comb.c for my_aff_comb in /home/ploujo_c/rendu/Piscine_C_J03
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct  1 14:37:47 2014 christophe ploujoux
** Last update Thu Oct  2 22:18:52 2014 christophe ploujoux
*/

int	comb(char a, char b, char c)
{
  my_putchar(c);
  my_putchar(b);
  my_putchar(a);
  if (a != 57 || b != 56 || c != 55)
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

int	my_aff_comb()
{
  char	a;
  char	b;
  char	c;

  c = 48;
  while (c <= 57)
    {
      b = c + 1;
      while (b <= 57)
	{
	  a = b + 1;
	  while (a <= 57)
	    {
	      comb(a, b, c);
	      a = a + 1;
	    }
	  b = b + 1;
	}
      c = c + 1;
    }
}
