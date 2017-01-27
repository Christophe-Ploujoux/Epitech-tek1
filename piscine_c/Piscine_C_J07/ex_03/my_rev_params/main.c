/*
** main.c for main in /home/ploujo_c/rendu/Piscine_C_J07/ex_03/my_rev_params
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct  8 20:23:42 2014 christophe ploujoux
** Last update Wed Oct  8 20:38:58 2014 christophe ploujoux
*/

int	main(int argc, char **argv)
{
  int	n;

  n = 0;
  while (argv[n] != 0)
    {
      n = n + 1;
    }
  n = n - 1;
  while (n >= 0)
    {
      my_putstr(argv[n]);
      my_putchar('\n');
      n = n - 1;
    }
}
