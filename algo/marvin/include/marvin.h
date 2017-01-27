/*
** marvin.h for marvin in /home/ploujo_c/rendu/prog-elem/marvin
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Jan  3 14:11:53 2015 Ploujoux Christophe
** Last update Sat Jan  3 15:55:12 2015 Ploujoux Christophe
*/

#ifndef MARVIN_H_
# define MARVIN_H_

typedef struct	s_list
{
  char		*data;
  struct s_list	*next;
  struct s_list *prev;
}		t_list;

#endif /* !MARVIN_H_ */
