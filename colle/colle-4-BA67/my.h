/*
** my.h for my_mastermind in /home/ploujo_c/rendu/colle-4-BA67
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon May 18 19:16:35 2015 christophe ploujoux
** Last update Mon May 18 22:27:36 2015 christophe ploujoux
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_par
{
  char		*code;
  int		*pions;
  int		try;
  int		slots;
  char		*charpion;
}		t_par;

typedef struct	s_res
{
  int		yes;
  int		no;
}		t_res;

char		*my_random_code();
unsigned int	getnbr(char *str);
char		*my_strcpy(char *dest, char *src);
char		*my_strdup(char *src);
void		my_putchar(char c);
void		my_putstr(char *str);
int		my_strlen(char *str);
char		*my_random_code();
int		*pions();
t_par		init_par(char **argv, int argc);
t_res		init_res();
int		my_strcmp(char *s1, char *s2);
int		right(char *buffer, t_par par);
int		wrong_pos(char *buffer, t_par par);
int		my_put_nbr(int nb);
char		*recup_buffer();
int		mastermind(t_par par, t_res res);
void		free_struct(t_par par);

#endif /* !MY_H_ */
