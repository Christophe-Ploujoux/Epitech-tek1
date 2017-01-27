/*
** my_str_isnum.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 18:30:13 2015 Ploujoux Christophe
** Last update Sun May  3 18:30:16 2015 Ploujoux Christophe
*/

int	my_str_isnum(char *str)
{
  int	pos;

  pos = 0;
  while (str[pos] != '\0')
    {
      if ((str[pos] >= '0' && str[pos] <= '9') || str[pos] == ' ')
	pos++;
      else
	return (1);
    }
  return (0);
}

int	my_str_islink(char *str)
{
  int	pos;

  pos = 0;
  while (str[pos] != '\0')
    {
      if ((str[pos] >= '0' && str[pos] <= '9') || str[pos] == '-')
	pos++;
      else
	return (1);
    }
  return (0);
}
