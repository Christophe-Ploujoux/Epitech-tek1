/*
** header.h for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Apr 28 14:38:37 2015 Ploujoux Christophe
** Last update Sun May  3 21:55:01 2015 Ploujoux Christophe
*/

#ifndef HEADER_H_
# define HEADER_H_

# include <stdlib.h>

# define VRAI 1
# define FAUX 0

typedef struct	s_link
{
  int		lk[420];
  int		i;
  int		prev;
  int		bool;
  int		weight;
}		t_link;

typedef struct	s_path
{
  int		start;
  int		end;
  int		path[420];
}		t_path;

char	*my_realloc(char *old, int size);
char	*get_next_line(const int fd);
char    **my_link(char **tab);
char	**my_coord(char **tab);
t_path	st_end(char **tab);
int	ant(char **pars);
int	main();
int	count_line();
char	**recup_file(char *str);
void	aff_list(char **tab);
int	tab_size(char **tab);
int	len_line(char **);
void	djikstra(t_link *lnk, t_path path, char **coor);
void	my_struct(t_link *, char **, char **, t_path);

int	my_get_nbr(char *str);
int	my_put_nbr(int nb);
void	my_putstr(char *str);
int	my_str_isnum(char *str);
int	my_str_islink(char *str);
int	my_strlen(char *str);
int	my_putchar(char c);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *src);
int	my_strcmp(char *s1, char *s2);
int	len_word(char *str);
char	*tok(char *str, char *token);
char	**str_to_word_tab(char *str, char *token);
void	*x_malloc(size_t n);
int	fd_putchar(char c, int fd);
void	fd_putstr(char *str, int fd);

#endif /* !HEADER_H_ */
