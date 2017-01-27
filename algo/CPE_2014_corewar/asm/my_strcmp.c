/*
** my_strcmp.c for my_strcmp in /home/rieux-_t/rendu/Piscine_C_J07/lib/my
** 
** Made by Thomas Rieux-Laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Oct  8 15:45:01 2014 Thomas Rieux-Laucat
** Last update Sun Apr 12 21:27:08 2015 
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return (s1[i] - s2[i]);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (s1[i] && s2[i] && i <= n)
    i++;
  while (j < i)
    {
      if (s1[k] != s2[j])
	{
	  return (s1[k] - s2[j]);
	}
      k++;
      j++;
    }
  return (0);
}
