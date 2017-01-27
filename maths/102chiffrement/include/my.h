/*
** my.h for my in /home/rieux-_t/Documents/rendu/102chiffrement/include
** 
** Made by thomas rieux-laucat
** Login   <rieux-_t@epitech.net>
** 
** Started on  Wed Nov 19 14:06:31 2014 thomas rieux-laucat
** Last update Sun Nov 30 16:28:42 2014 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

int	*get_flag(char *);
void	cryptage(char **, int *);
void	decryptage(char **);
int	check_arg(char **);
float	*get_flag_base(char *, char *);
void	afficher_tab_int(int *, int);
void	my_putchar(char);
int	msg_error(int);
int	my_strlen(char *);
int	my_getnbr(char *);
void	my_put_nbr(int);
int	my_put_nbr_base(int, char *);
int	my_str_isnum(char *);
int	my_putstr(char *);
char	*convert_base(char *, char *, char *);
int	my_strlen(char *);
int	main(int, char **);
int	my_getnbr_base(char *, char *);
int	find_pos(char, char *);
char	*my_revstr(char *);
int	my_strlen_space(char *);
int	check_sentence(char **);
int	check_base(char **);
int	check_mode(char **);

#endif /* !MY_H_ */
