/*
** my.h for 107transfert in /home/ploujo_c/rendu/maths/107transfert/include
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Mar  5 16:47:23 2015 Ploujoux Christophe
** Last update Fri Mar  6 11:18:46 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int	*my_arg_int(char **argv, int pow);
void    aff_eq(int *tab, int pow);
void	aff_tab(char **tab);
int	main(int argc, char **argv);
int	check_number(int ac, char **av);
int	check_arg(int ac);
int	my_countword(char *str, char carac);
int	my_count_carac(char *str, char carac);
char	**str_to_word_tab(char *str, char carac);

#endif /* !MY_H_ */
