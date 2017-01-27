/*
** get_next_line.h for get_next_line in /home/ploujo_c/rendu/prog-elem/CPE_2014_get_next_line
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 21 11:25:54 2014 Ploujoux Christophe
** Last update Mon Dec 15 14:20:03 2014 Ploujoux Christophe
*/

#ifndef _GET_NEXT_LINE
# define _GET_NEXT_LINE

#include <unistd.h>
#include <stdlib.h>
#define BUF_SIZE (200)

char	*get_next_line(const int);
int	my_strlen(char *);
int	my_putstr(char *);
void	my_putchar(char);
char	*re_alloc(char *);

#endif /*_GET_NEXT_LINE */
