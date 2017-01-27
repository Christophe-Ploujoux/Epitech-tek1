/*
** tests-my_strncpy.c for test-my_strncpy in /home/ploujo_c/rendu/Piscine_C_J06/tests
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Oct  7 10:46:28 2014 christophe ploujoux
** Last update Tue Oct  7 19:25:59 2014 christophe ploujoux
*/

int	main()
{
  char	str[];
  char	str2[];

  str[] = "";
  str2[] = "hey";
  my_strncpy(str2, str, 0);
  my_strncpy(str2, str, 100);
}
