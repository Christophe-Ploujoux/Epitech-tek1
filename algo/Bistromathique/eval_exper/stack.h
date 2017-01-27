/*
** stack.h for stack in /home/ploujo_c/rendu/Prog-elem/Bistromathique/eval_exper
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Wed Nov  5 11:03:47 2014 Ploujoux Christophe
** Last update Wed Nov  5 13:04:02 2014 Ploujoux Christophe
*/

#ifndef STACK_H_
# define STACK_H_

typedef struct stack
{
  int	ops;
  struct stack *prev;
} Stack;

#endif /*STACK_H_*/
