/*
** main.c for main in /home/rieux-_t/Documents/rendu/102chiffrement
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 01:22:12 2014 thomas rieux-laucat
** Last update Sun Nov 30 16:29:15 2014 Ploujoux Christophe
*/

#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

int	main(int argc, char **argv)
{
  int	*flag;
  
  if (msg_error(argc) == 1)
    return (0);
  if (check_arg(argv) == 1)
    return (0);
  if (check_base(argv) == 1)
    return (0);
  if (check_mode(argv) == 1)
    return (0);
  else
    {
      if (argv[7][0] == '0')
	{
	  if (check_sentence(argv) == 1)
	    return (0);
	  flag = get_flag(argv[1]);
	  printf("chiffrement de \"%s\" à l'aide de la cle %s %s %s %s dans la base \"%s\" \n",
		 argv[1], argv[2], argv[3], argv[4], argv[5], argv[6]);
	  my_putstr("=> ");
	  cryptage(argv, flag);
	}
      else if (argv[7][0] == '1')
	{
	  printf("déchiffrement de \"%s\" à l'aide de la clé %s %s %s %s dans la base \"%s\" \n", 
		 argv[1], argv[2], argv[3], argv[4], argv[5], argv[6]);
	  my_putstr("=> ");
	  decryptage(argv);
	}
    }
  return (0);
}
