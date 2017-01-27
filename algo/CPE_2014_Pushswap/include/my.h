/*
** my.h for my in /home/ploujo_c/rendu/prog-elem/test
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Dec  8 13:49:27 2014 Ploujoux Christophe
** Last update Sun Dec 14 22:19:45 2014 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>

typedef struct	s_list
{
  int		val;
  struct s_list	*nxt;
  struct s_list *prev;
}		t_list;

t_list	*put_in_end(t_list **, int);
int	put_in_first(t_list **, int);
int	check_list_a(t_list *);
int	check_list_b(t_list *);
void	my_show_list_a(t_list *);
void	my_show_list_b(t_list *);
void	my_free_list(t_list **);
t_list	*last_elem(t_list *);
t_list	*my_params_in_list(int, char **);
int	elem_count(t_list **);
int	my_getnbr(char *);
int	rotate_first(t_list **);
int	ra(t_list **);
int	rb(t_list **);
int	swap(t_list **);
int	sa(t_list **);
int	sb(t_list **);
int	delete(t_list **);
int	push(t_list **, t_list **);
int	pa(t_list **, t_list **);
int	pb(t_list **, t_list **);
int	main(int, char **);
void	sort(t_list **, t_list **);
void	sort_b(t_list **, t_list **);
void	sort_bonus(t_list **, t_list **);
void	sort_b_show(t_list **, t_list **);
int	check_list(t_list *);
int	check_arg(int, char **);
int	check_opt(char **);
int	check_alph(int, char **);

#endif /* MY_H_ */
