/*
** cd.c for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:55:08 2015 Ploujoux Christophe
** Last update Thu Jun  4 19:25:49 2015 Ploujoux Christophe
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "my.h"

/*
**change our variable PWD in our env
*/
char	*my_pwd(char *save, char *cat, char **tab, char *pwd)
{
  int	i;

  save = "PWD=";
  if (cat[0] == '/')
    save = my_strcat(save, cat + 1);
  if (my_strcmp(cat, "..") == 0)
    {
      i = 0;
      save = "PWD=";
      while (tab[i + 1])
	{
	  save = my_strcat(save, tab[i]);
	  i++;
	}
    }
  if (cat[0] != '/' && my_strcmp(cat, "..") != 0)
    {
      save = my_strcat(save, pwd + 1);
      save = my_strcmp(pwd, "/") != 0 ?
	my_strcat(save, cat) : my_strcat2(save, cat);
    }
  return (save);
}

/*
**change our variable OLDPWD in our environnement
*/
char	*my_oldpwd(char *save, char *pwd)
{
  save = "OLDPWD=";
  save = my_strcat(save, pwd + 1);
  return (save);
}

void	loop_cd(t_list *tmp, char **tab, char *buffer, char *str)
{
  int	i;

  i = 0;
  while (i < size_list(tmp))
    {
      if (my_strncmp(tmp->data, "PWD=", 4) == 0 && my_strcmp(tmp->data, "PWD=") != 0)
	tmp->data = my_pwd(tmp->data, buffer, tab, str);
      if (my_strncmp(tmp->data, "OLDPWD=", 7) == 0)
	tmp->data = my_oldpwd(tmp-> data, str);
      tmp = tmp->prev;
      i++;
    }
}

/*
**recode of the builtin cd
*/
int		my_cd(char **buffer, t_list *save)
{
  char		*str;
  t_list	*tmp;
  char		**tab;

  tmp = save->prev;
  str = get_save(save, "PWD=");
  tab = str_to_word_tab(str, "/");
  if (buffer[1] == NULL || my_strcmp(buffer[1], "~") == 0)
    {
      chdir("/home");
      loop_cd(tmp, tab, "/home", str);
    }
  else if (chdir(buffer[1]) == -1)
    {
      my_putstr(buffer[1]);
      my_putstr(": error, can't find the directory\n");
      return (-1);
    }
  if (buffer[1] && my_strcmp(buffer[1], "~") != 0)
    loop_cd(tmp, tab, buffer[1], str);
  my_free_tab(tab);
  return (0);
}
