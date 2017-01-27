/*
** inf_add.h for INF_ADD_H in /home/ploujo_c/rendu/forum-bistro
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Oct 29 15:34:38 2014 christophe ploujoux
** Last update Wed Oct 29 16:15:22 2014 christophe ploujoux
*/

#ifndef INF_ADD_H_
# define INF_ADD_H_

typedef struct s_number
{
  char		*str;
  int		length;
  int		offset;
}	t_number;

typedef struct s_addition
{
  t_number	n1;
  t_number	n2;
  t_number	result;
  int		retenue;
  int		somme;
}	t_addition;

# define MAX(a, b) ((a) > (b) ? (a) : (b))
# define CHAR_TO_INT(c) ((c) - '0')
# define INT_TO_CHAR(c) ((c) + '0')

#endif
