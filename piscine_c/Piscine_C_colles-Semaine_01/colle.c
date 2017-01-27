/*
** test_colle.c for test_colle in /home/ploujo_c/rendu/Piscine_C_colles-Semaine_01
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Oct  4 14:07:56 2014 christophe ploujoux
** Last update Sat Oct  4 21:32:26 2014 christophe ploujoux
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	colle(int x, int y)
{
  int	a;
  int	b;

  a = 1;
  b = 1;
  while (b <= y)
    {
      while (a <= x)
	{
	  condition(a, x, b, y);
	  a = a + 1;
	}
      my_putchar('\n');
      a = 1;
      b = b + 1;
    }
}

int	condition(int a, int x, int b, int y)
{
  if ((a == 1 && b == 1) || (a == x && b == 1) ||
      (a == 1 && b == y) || (a == x && b == y))
    {
      my_putchar('o');
    }
  else if (a == 1 || a == x)
    {
      my_putchar('|');
    }
  else if (b == 1 || b == y)
    {
      my_putchar('-');
    }
  else
    {
      my_putchar(' ');
    }
}

int	main()
{
  colle (90, 100000);
}
