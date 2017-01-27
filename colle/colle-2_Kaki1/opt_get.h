/*
** opt_get.h for opt_get in /home/ploujo_c/rendu/colle-2_Kaki1
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May  4 19:47:52 2015 christophe ploujoux
** Last update Mon May  4 20:57:33 2015 christophe ploujoux
*/

#ifndef OPT_GET_H_
# define OPT_GET_H_

typedef int	t_bool;
typedef int	t_pos;

typedef struct	s_opt
{
  t_pos		pos;
  t_bool	bool;
  const char	**arg;
}		t_opt;

char	**str_to_word_tab(const char *, char);
void	my_putchar(char);
void	my_putstr(char *);
void	aff_tab(char **);
int	my_strlen(char*);
int	size_tab(char **);
int	my_strcmp(char *, char *);

#endif /* !OPT_GET_H_ */
