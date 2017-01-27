/*
** my_display.c for my_display in /home/ploujo_c/rendu/unix/PSU_2014_my_ls
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sat Nov 29 15:17:45 2014 Ploujoux Christophe
** Last update Sun Nov 30 17:16:48 2014 Ploujoux Christophe
*/

#include "include/my.h"

void	my_rights(struct stat sb)
{
  my_putstr((sb.st_mode & S_IRUSR) ? "r" : "-");
  my_putstr((sb.st_mode & S_IWUSR) ? "w" : "-");
  my_putstr((sb.st_mode & S_IXUSR) ? "x" : "-");
  my_putstr((sb.st_mode & S_IRGRP) ? "r" : "-");
  my_putstr((sb.st_mode & S_IWGRP) ? "w" : "-");
  my_putstr((sb.st_mode & S_IXGRP) ? "x" : "-");
  my_putstr((sb.st_mode & S_IROTH) ? "r" : "-");
  my_putstr((sb.st_mode & S_IWOTH) ? "w" : "-");
  my_putstr((sb.st_mode & S_IXOTH) ? "x" : "-");
  my_putstr("  ");
}

void	my_types(struct stat sb)
{
  if (S_ISDIR(sb.st_mode))
    my_putstr("d");
  else if (S_ISCHR(sb.st_mode))
    my_putstr("c");
  else if (S_ISBLK(sb.st_mode))
    my_putstr("b");
  else if (S_ISLNK(sb.st_mode))
    my_putstr("l");
  else if (S_ISSOCK(sb.st_mode))
    my_putstr("s");
  else
    my_putstr("-");
}

void	display_time(int nb)
{
  if (nb >= 10000)
    my_put_nbr(nb);
  else if (nb >= 1000)
    {
      my_putstr(" ");
      my_put_nbr(nb);
    }
  else if (nb >= 100)
    {
      my_putstr("  ");
      my_put_nbr(nb);
    }
  else if (nb >= 10)
    {
      my_putstr("   ");
      my_put_nbr(nb);
    }
  else if (nb >= 0)
    {
      my_putstr("    ");
      my_put_nbr(nb);
    }
}

void	my_everything(struct passwd *pwd, struct group *grp, struct stat sb)
{
  char	*str;
  int	i;

  i = 3;
  pwd = getpwuid(sb.st_uid);
  grp = getgrgid(sb.st_gid);
  str = ctime(&sb.st_mtime);
  my_put_nbr((int) sb.st_nlink);
  my_putchar(' ');
  my_putstr(pwd->pw_name);
  my_putchar(' ');
  my_putstr(grp->gr_name);
  my_putchar(' ');
  display_time((int) sb.st_size);
  my_putchar(' ');
  while (i++ < 15)
    my_putchar(str[i]);
  my_putchar(' ');
}

void	my_color(struct stat sb, char *str)
{
  if (S_ISDIR(sb.st_mode))
    my_printf("\033[1;34m%s\033[m\n", str);
  else if (S_ISCHR(sb.st_mode) || S_ISBLK(sb.st_mode))
    my_printf("\033[1;33m%s\033[m\n", str);
  else if (S_ISLNK(sb.st_mode))
    my_printf("\033[1;36m%s\033[m\n", str);
  else if (sb.st_mode & S_IXUSR || sb.st_mode & S_IXGRP
	   || sb.st_mode & S_IXOTH)
    my_printf("\033[1;32m%s\033[m\n", str);
  else if (S_ISSOCK(sb.st_mode))
    my_printf("\033[1;32m%s\033[m\n", str);
  else
    my_printf("%s\n", str);
}
