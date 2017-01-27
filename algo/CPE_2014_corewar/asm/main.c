/*
** main.c for coreware in /home/rieux-_t/Projets/Modules/Elem/CPE_2014_bsq
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Tue Mar 31 18:15:16 2015 thomas rieux-luacat
<<<<<<< HEAD
** Last update Sun Apr 12 22:45:52 2015 Ploujoux Christophe
=======
** Last update Thu Apr  9 15:13:57 2015 Ploujoux Christophe
>>>>>>> a6bea7b2e94b72351994f9445e9cd5a606dff329
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/op.h"
#include "include/asm.h"
#include "include/get_next_line.h"

char	*get_file_name(char *str)
{
  int	i;
  char	*name;

  i = 0;
  name = x_malloc(sizeof (char) * (my_strlen(str) - 2));
  while (i < my_strlen(str) - 2)
    {
      name[i] = str[i];
      i++;
    }
  name = my_strcat(name, ".cor");
  return (name);
}

char	**get_both(int fd)
{
  char	**header;
  char	*str;
  char	**tab;

  header = x_malloc(sizeof(char *) * 2);
  header[0] = NULL;
  header[1] = NULL;
  while ((str = get_next_line(fd)) && (header[0] == NULL || header[1] == NULL))
    {
      tab = str_to_word_tab(str, ",\t\"");
      if (header[1] == NULL)
	header[1] = get_comment(tab);
      if (header[0] == NULL)
	header[0] = get_name(tab);
      free(str);
    }
  return (header);
}

void	loop(int fd)
{
  char	*str;
  char	**tab;
  char	**tab2;

  while ((str = get_next_line(fd)))
    {
      tab = str_to_word_tab(str, "\t");
      if (tab[1] != NULL && size_tab(tab) != 0)
	{
	  if (size_tab(tab) == 2)
	    tab2 = str_to_word_tab(tab[1], ",\t");
	  else
	    tab2 = str_to_word_tab(tab[2], ",\t");
	  transform(par(tab2), tab2, 1);
	}
    }
}

int		main(int argc, char *argv[])
{
  int		fd;
  int		fd2;
  header_t	head;
  char		**nam_com;

  if (argc != 2)
    return (1);
  if ((fd = open(argv[1], O_RDONLY)) == -1)
    return (1);
  if ((fd2 = open(get_file_name(argv[1]), O_CREAT | O_WRONLY |
		  O_TRUNC, PERM)) == -1)
    return (1);
  nam_com = get_both(fd);
  head = create_header(nam_com[0], nam_com[1]);
  write(fd2, &head, sizeof(header_t));
  loop(fd);
  return (0);
}
