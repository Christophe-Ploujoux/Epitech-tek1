/*
** my.h for my in /home/ploujo_c/rendu/prog-elem/CPE_2014_bsq
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Jan 14 14:28:31 2015 Ploujoux Christophe
** Last update Sun Jan 18 19:32:45 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>
# define BUFF_SIZE 10

int	my_int_cmp(int s1, int s2);
int	my_find_max(int **ptr, int size);
char	*get_next_line(int fd);
int	main(int argc, char **argv);
int	my_put_nbr(int  nb);
int	col_number(char **tab);
void	free_tab_char(char **tab);
void	free_tab_int(char **tab, int **ptr);
int	lin_number(char **tab);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
void	*my_memcpy(char *dest, char *src, int n);
int	my_getnbr(char *str);
char	**save_tab(char **argv);
int	min_int(int x, int y, int z);
int	my_size_ptr(char **tab);
int	**init_ptr(char **tab);
char	**bsq(char **tab);

#endif /* !MY_H_ */
