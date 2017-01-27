/*
** my.h for allum1 in /home/ploujo_c/rendu/prog-elem/CPE_2014_allum1/include
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Feb 12 17:05:51 2015 Ploujoux Christophe
** Last update Thu Feb 19 20:01:39 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>

# define RED	"\033[1;31m"
# define WHITE	"\033[0;m"
# define YELLOW "\033[1;33m"
# define GREEN	"\033[1;32m"
# define BLUE	"\033[1;34m"
# define PURPLE	"\033[1;35m"
# define CYAN	"\033[1;36m"

void	color_str(char *str, char *color);
char	*prompt();
void	winner(char **, char **, int *);
void	loser(char **, char **, int *);
int	*number(char **);
int	allum_number(char *str);
int	my_allum(int size);
int	main(int argc, char **argv);
int	my_putchar(char c);
int	my_putstr(char *str);
int	my_get_nbr(char *str);
int	my_put_nbr(int  nb);
int	my_countword(char *str, char carac);
int	my_count_carac(char *str, char carac);
char	**str_to_word_tab(char *str, char carac);
void	aff_tab(char **tab);
char	**tab(char **tab, int size);
char	**tab_modif(char **tab, int line, int col);
int	tab_count(char **tab);
void	ia(char **tab, int *nb, int size, char **buffer);
int	my_strcmp(char *s1, char *s2);
int	check(char **buffer, int *nb, char **al, int size);
int	my_str_isnum(char *str);
void	free_tab(char **tab);
void	my_exit(char **buffer, char **al, int *nb);

#endif /* !MY_H_ */
