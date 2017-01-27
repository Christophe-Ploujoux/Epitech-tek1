/*
** my.h for my in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Fri Nov 28 11:50:13 2014 Ploujoux Christophe
** Last update Sun Nov 30 13:18:57 2014 Ploujoux Christophe
*/
#ifndef MY_H_
# define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>
#include <grp.h>

void	init(void (*fct[5]));
int	main(int, char **);
void	my_rights(struct stat sb);
void	my_types(struct stat sb);
void	my_everything(struct passwd *pwd, struct group *grp, struct stat sb);
void	display_time(int);
void	ls_d();
void	ls_l();
void	ls();
void	ls_R();
void	my_total(int);
int	my_strlen(char *str);
void	my_color(struct stat, char *);
char	**my_sort_files(char **, int);
char	**my_rev_files(char **, int);

#endif /* !My_H_ */
