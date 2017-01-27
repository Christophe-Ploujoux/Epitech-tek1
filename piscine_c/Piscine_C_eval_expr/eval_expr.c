/*
** eval_expr.c for eval_expr in /home/ploujo_c/rendu/Piscine_C_eval_expr
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Oct 26 11:58:00 2014 christophe ploujoux
** Last update Sun Oct 26 12:22:27 2014 christophe ploujoux
*/

int	eval_expr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
  
int	main(int ac, char **av)
{
  if (ac > 1)
    {
      my_putstr(av[1]);
      my_putchar('\n');
    }
}
