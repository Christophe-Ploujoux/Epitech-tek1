/*
** get_next_line.h for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh/include
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:58:38 2015 Ploujoux Christophe
** Last update Sun May 24 15:58:38 2015 Ploujoux Christophe
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#define BUF_SIZE 5000
#define BUF_READ 5000

char	*get_next_line(const int);
char	*my_realloc(char *, int);
int	my_strlen(char *);

#endif /* !GET_NEXT_LINE_H_ */
