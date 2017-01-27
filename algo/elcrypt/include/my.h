/*
** my.h for elcrypt in /home/ploujo_c/rendu/prog-elem/elcrypt
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun Mar  1 19:52:40 2015 Ploujoux Christophe
** Last update Sun Mar  1 21:32:12 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

# include <stdlib.h>
# include <stdio.h>

# define RED	"\033[1;31m"
# define WHITE	"\033[0;m"
# define YELLOW "\033[1;33m"
# define GREEN	"\033[1;32m"
# define BLUE	"\033[1;34m"
# define PURPLE	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define GAUCHE 0
# define DROITE 1

void	*my_xmalloc(int t);
int	my_strcmp(char *, char *);
int	check_cmd3(char **av, int i);
int	check_cmd2(int ac, char **av, int o, int k);
int	check_cmd(int ac, char **av);
void	check_len_key(int len_key);
int     find_pos(char c, char *str);
int     my_getnbr_base(char *str, char *base);
char    *convert_base(char *nbr, char *base_from, char *base_to);
char	*crypt_word(char *src, char *key);
int	*char_in_int(char *str);
void	cryptage(char *src, FILE *fd, char *key);
char	*decrypt_word(char *src, char *key);
void	decryptage(char *src, FILE *fd, char *key);
char	*find_key(int ac, char **av);
int	find_fd1(int ac, char **av);
FILE	*find_fd2(int ac, char **av);
int	find_mod(char **av);
char	*padding(char *str);
char	*get_next_eight(const int fd);
int	int_size(int nb);
char	*int_to_string(int nb);
char	*bit_delete(char *str);
char	*bit_add_delete(char *str, int i);
char	*key8_in_binary(char *key);
char	*key16_in_binary(char *key);
char	*key18_in_binary(char *key);
char	*key_rotate(char *key);
char	*key_gen(char *key_prime, int n);
void	my_putchar(char c, int fd);
int	main(int argc, char **argv);
int	my_strlen(char	*str);
char    *my_strcat(char *dest, char *src);
char    *my_strcat_unfree(char *dest, char *src);
char    *my_revstr(char *str);
char	**string_split(char *str);
char	*bit_add(char *str);
char	*string_in_binary(char *string);
char	*xor(char *a, char *b);

#endif /* !MY_H_ */
