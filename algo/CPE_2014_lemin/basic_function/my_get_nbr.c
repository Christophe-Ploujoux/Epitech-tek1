/*
** my_get_nbr.c for lemin in /home/ploujo_c/rendu/prog-elem/CPE_2014_lemin/basic_function
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May  3 18:29:30 2015 Ploujoux Christophe
** Last update Sun May  3 18:29:31 2015 Ploujoux Christophe
*/

int	my_get_nbr(char *str)
{
  int	pos;
  int	nbr;
  int	signe;

  pos = 0;
  nbr = 0;
  signe = 1;
  while (str[pos] == '-')
    {
      signe = signe * -1;
      pos = pos + 1;
    }
  while (str[pos] != '\0')
    {
      nbr = nbr * 10 + (str[pos] - '0');
      pos = pos + 1;
    }
  return (nbr * signe);
}
