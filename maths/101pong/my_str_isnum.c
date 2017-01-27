/*
** my_str_isnum.c for my_str_isnum in /home/rieux-_t/Documents/rendu/Piscine_Blanche/J06
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Fri Oct 31 13:47:40 2014 thomas rieux-laucat
** Last update Wed Nov 12 19:06:35 2014 Ploujoux Christophe
*/

int	my_str_isnum(char *str)
{
  int	i;
  
  i = 0;
  while (str[i])
    {
      if ((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
	i++;
      else
	return (1);
    }
  return (0);
}
