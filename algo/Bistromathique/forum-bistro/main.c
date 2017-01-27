/*
** main.c for main in /home/ploujo_c/rendu/forum-bistro
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct 29 15:15:35 2014 christophe ploujoux
** Last update Wed Oct 29 16:24:58 2014 christophe ploujoux
*/
#include <stdlib.h>
#include "inf_add.h"

int		init_t_addition(t_addition *my_add, char **argv)
{
  my_add->n1.str = argv[1];
  my_add->n1.length = my_strlen(argv[1]);
  my_add->n1.offset = my_add->n1.length;
  my_add->n2.str = argv[2];
  my_add->n2.length = my_strlen(argv[2]);
  my_add->n2.offset = my_add->n2.length;
  my_add->result.length = MAX(my_add->n1.length, my_add->n2.length) + 1;
  my_add->result.offset = my_add->result.length;
  my_add->result.str = malloc(sizeof(char) * (my_add->result.length + 1));
  if (my_add->result.str == NULL)
    {
      my_putstr("malloc() failled \n");
      return (1);
    }
  my_add->result.str[my_add->result.offset] = '\0';
  my_add->retenue = 0;
  return (0);
}

void		complete_remaining(t_addition *my_add)
{

}

void		do_addition(t_addition *my_add)
{
  while (my_add->n1.offset > 0 && my_add->n2.offset > 0)
    {
      my_add->somme = 
	CHAR_TO_INT(my_add->n1.str[my_add->n1.offset - 1])
	+ CHAR_TO_INT(my_add->n2.str[my_add->n2.offset - 1])
	+ my_add->retenue;
      my_add->retenue = my_add->somme / 10;
      my_add->somme = my_add->somme % 10;
      my_add->result.str[my_add->result.offset -1] = INT_TO_CHAR(my_add->somme);
      my_add->n1.offset--;
      my_add->n2.offset--;
      my_add->result.offset--;
    }
}

int		main(int argc, char **argv)
{
  t_addition	my_add;

  
  if (argc != 3)
    {
      my_putstr("Usage ./inf_add number1 number2\n");
      return (1);
    }
  if (init_t_addition(&my_add, argv) == 1)
    {
      my_putstr("Error: Initialization faillure\n");
      return (1);
    }
   return (0);
{
