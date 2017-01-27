/*
** my.h for my.h in 
** 
** Made by Sebastien BOULOC
** Login   <bouloc_s@epitech.net>
** 
** Started on  Fri Jan  2 20:16:10 2015 Sebastien BOULOC
** Last update Sun Jan  4 18:03:47 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

#include "marvin.h"

void	my_cut(char *);
int	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_check(int, char **);
int	my_strncmp(char *s1, char *s2, int n);
int     ad_before_racine(t_list *elem, char *data);
t_list	*init_list(void);
void	my_show_list(t_list *list);
int	main(int ac, char **av);
int	var_type(char *str);
int	function_or_pointer(char *str);
int	function_or_variable(char *str, int i);
int	marvin(char *str, int i);
int	check_semicolon(char *str);
int	my_check(int ac, char **av);
t_list	*pars_function(char *str);
int	ptr_count(char *str);
int     jump_space(char *str, int i);
void	aff_var_name(char *);
void	aff_var_list(char *);
void	aff_func_name(char *);
void	aff_var(char *);
int	aff_func(char *);
int	aff_func_ptr(char *);
int	aff_called(char *str);
void	free_list(t_list *);

#endif /* !MY_H_ */
