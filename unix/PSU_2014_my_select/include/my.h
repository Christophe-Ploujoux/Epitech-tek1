/*
** my.h for my in /home/ploujo_c/rendu/unix/PSU_2014_my_select
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan  7 14:32:06 2015 Ploujoux Christophe
** Last update Sun Jan 11 12:52:44 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_list
{
  char		*data;
  struct s_list	*next;
  struct s_list *prev;
}		t_list;

char	*get_env(char **, char *);
int	show_params(int ac, char **av);
int	show_key();
t_list	*init_list(void);
int     ad_before_racine(t_list *elem, char *data);
void	my_show_list(t_list *list);
int	my_putchr(int c);
int	x_tput(char *str, int nb, int my_putchr(int));
int	clear_term(char **);
void	init_buffer(char *buffer);
int	my_keys(int size, char **, char **);
int	main(int argc, char **argv, char **env);
int	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	curs_down(int, int);
int	curs_up(int, int);
void	*x_malloc(void *, int);
char	*x_tgetstr(char *, char **);
void	curs_re(int, char *);
int	*init_tab(int size, int *);
void	word_sur(t_list *, int, int *, char **);

#endif /* !MY_H_ */
