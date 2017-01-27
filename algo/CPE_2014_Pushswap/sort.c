/*
** sort.c for sort in /home/ploujo_c/rendu/prog-elem/CPE_2014_Pushswap
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Thu Dec 11 14:02:17 2014 Ploujoux Christophe
** Last update Sun Dec 14 16:56:29 2014 Ploujoux Christophe
*/

#include "include/my.h"

void		sort_b(t_list **l_a, t_list **l_b)
{
  while (check_list_b(*l_b) != 0)
    {
      if ((*l_b)->val < last_elem(*l_b)->val)
	rb(l_b);
      if ((*l_b)->val < (*l_b)->nxt->val)
	sb(l_b);
      if (((*l_b)->val >= last_elem(*l_b)->val) &&
      	  ((*l_b)->val >= (*l_b)->nxt->val))
       	pa(l_a, l_b);
    }
}

void		sort(t_list **l_a, t_list **l_b)
{
  while (check_list_a(*l_a) != 0)
    {
      if ((*l_a)->val > last_elem(*l_a)->val)
	ra(l_a);
      if ((*l_a)->val > (*l_a)->nxt->val)
	sa(l_a);
      if (((*l_a)->val <= last_elem(*l_a)->val) &&
	  ((*l_a)->val <= (*l_a)->nxt->val))
	{
	  pb(l_a, l_b);
	  sort_b(l_a, l_b);
	}
    }
  while (*l_b != NULL)
    pa(l_a, l_b);
  my_putchar('\n');
}

void		my_show_ab(t_list **l_a, t_list **l_b)
{
  my_putchar('\n');
  my_show_list_a(*l_a);
  my_show_list_b(*l_b);
}

void		sort_b_show(t_list **l_a, t_list **l_b)
{
  while (check_list_b(*l_b) != 0)
    {
      if ((*l_b)->val < last_elem(*l_b)->val)
	{
	  rb(l_b);
	  my_show_ab(l_a, l_b);
	}
      if ((*l_b)->val < (*l_b)->nxt->val)
	{
	  sb(l_b);
	  my_show_ab(l_a, l_b);
	}
      if (((*l_b)->val >= last_elem(*l_b)->val) &&
      	  ((*l_b)->val >= (*l_b)->nxt->val))
       	{
	  pa(l_a, l_b);
	  my_show_ab(l_a, l_b);
	}
    }
}

void		sort_bonus(t_list **l_a, t_list **l_b)
{
  while (check_list_a(*l_a) != 0)
    {
      if ((*l_a)->val > last_elem(*l_a)->val)
	{
	  ra(l_a);
	  my_show_ab(l_a, l_b);
	}
      if ((*l_a)->val > (*l_a)->nxt->val)
	{
	  sa(l_a);
	  my_show_ab(l_a, l_b);
	}
      if (((*l_a)->val <= last_elem(*l_a)->val) &&
	  ((*l_a)->val <= (*l_a)->nxt->val))
	{
	  pb(l_a, l_b);
	  my_show_ab(l_a, l_b);
	  sort_b_show(l_a, l_b);
	}
    }
  while (*l_b != NULL)
    {
      pa(l_a, l_b);
      my_show_ab(l_a, l_b);
    }
}
