/*
** my_files_detailed.c for my_files_detailed in /home/ploujo_c/rendu/unix/tp/tp2
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Mon Nov 24 11:13:13 2014 Ploujoux Christophe
** Last update Sun Nov 30 12:59:32 2014 Ploujoux Christophe
*/

#include "include/my.h"

void		ls_l()
{
  struct passwd *pwd;
  struct group	*grp;
  struct stat	sb;
  struct dirent	*lecture;
  DIR		*rep;
  DIR		*re;
  int		i;

  my_total(i);
  re = opendir(".");
  while ((lecture = readdir(re)) != NULL)
    {
      if (lecture->d_name[0] != '.')
	{
	  if (stat(lecture->d_name, &sb) == -1)
	    my_putstr("Erreur\n");
	  my_types(sb);
	  my_rights(sb);
	  my_everything(pwd, grp, sb);
	  my_color(sb, lecture->d_name);
	}
    }
  closedir(re);
}

void		ls_d()
{ 
  struct stat	sb;
  struct dirent	*lecture;
  DIR		*rep;

  rep = opendir(".");
  while ((lecture = readdir(rep)) != NULL)
    {
      if (lecture->d_name[0] == '.' && my_strlen(lecture->d_name) == 1)
	{
	  if (stat(lecture->d_name, &sb) == -1)
	    my_putstr("Erreur");
	  my_color(sb, lecture->d_name);
	}
    }
  closedir(rep);
}

void		ls()
{
  struct dirent	*lecture;
  struct stat	sb;
  DIR		*rep;
  int		i;
  int		j;
  char		**av;
  
  rep = opendir(".");
  while ((lecture = readdir(rep)) != NULL)
    {
      if (lecture->d_name[0] != '.')
	{
	  if (stat(lecture->d_name, &sb) == -1)
	    my_putstr("Erreur");
	  my_color(sb, lecture->d_name);
	}
    }
  closedir(rep);
}

void		ls_R(char *dossier)
{
  struct dirent	*lecture;
  DIR		*rep;
  struct  stat	sb;
 
  rep = opendir(dossier);
  while ((lecture = readdir(rep)) != NULL)
    {
      if (lecture->d_name[0] != '.')
	{
	  stat(lecture->d_name, &sb);
	  my_color(sb, lecture->d_name);
	}
      if (lecture->d_type == DT_DIR && lecture->d_name[0] != '.')
	ls_R(lecture->d_name);
    }
  closedir(rep);
}
