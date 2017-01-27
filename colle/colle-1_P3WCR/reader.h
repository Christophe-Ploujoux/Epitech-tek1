/*
** reader.h for reader in /home/reiatu_t/Rendu/colle-1_P3WCR
**
** Made by teimanu reiatua
** Login   <reiatu_t@epitech.net>
**
** Started on  Mon Apr 27 19:18:47 2015 teimanu reiatua
** Last update Mon Apr 27 21:18:24 2015 Ploujoux Christophe
*/

#ifndef READER_H_
# define READER_H_

#include <unistd.h>

void	file_name(char *str);
void	item_number(int	i);
void	title(char *str);
void	my_link(char *str);
void	aff_title(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
int	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*get_next_line(int fd);
void	aff(char *str);
int	main(int ac, char **av);
int	my_put_nbr(int nb);
int	count_space(char *str);

#endif /* READER_H_ */
