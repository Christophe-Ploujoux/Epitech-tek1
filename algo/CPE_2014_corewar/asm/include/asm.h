/*
** asm.h for corewar in /home/rieux-_t/Projets/Modules/Elem/CPE_2014_corewar/asm/include
**
** Made by thomas Rieux-Laucat
** Login   <rieux-_t@epitech.net>
**
** Started on  Sat Apr  4 17:38:11 2015 Thomas Rieux-Laucat
** Last update Sun Apr 12 22:46:09 2015 Ploujoux Christophe
*/

#ifndef ASM_H_
# define ASM_H_

# include "op.h"
# include <stdlib.h>

# define PERM S_IRUSR | S_IWUSR | S_IXUSR | S_IRGRP | S_IWGRP |  S_IROTH
typedef struct  s_num
{
  char		*data;
  struct s_num 	*next;
}               t_list;

/*List ******************************/

int		instruction_pars(char *str);
void		fd_putchar(char c, int fd);
void		fd_putstr(char *str, int fd);
char		*my_realloc(char *old, int size);
char		*get_next_line(const int fd);
char		*get_name(char **tab);
char		*get_comment(char **tab);
header_t	create_header(char *name, char *comment);
t_list		*my_params_in_list(int ac, char *str);
char		*last_node(t_list **list);
void		aff_list(t_list *str);
void		free_list(t_list **list);
int		my_put_in_list(t_list **list, char *str);
t_list		*put_in_end(t_list **list, char *str);
void		aff_tab(char **tab);
int		size_tab(char **tab);
char		*descrip_loop(char *pars, int i, char **tab);
char		*par(char **tab);
int		main(int argc, char *argv[]);
int		my_getnbr(char *str);
void		my_putnbr_base(unsigned int nb, char *base);
int		my_strcmp(char *s1, char *s2);
int		my_strncmp(char *s1, char *s2, int n);
char		*my_strcpy(char *dest, char *src);
char		*my_strdup(char *src);
void		my_free_tab(char **tab);
char		*my_revstr(char *str);
char		*my_strcat(char *dest, char *src);
void		my_putchar(char c);
int		my_strlen(char *str);
void		my_putstr(char *str);
int		len_word(char *str);
int		count_word(char *str);
char		*tok(char *str, char *token);
char		**str_to_word_tab(char *str, char *token);
int		register_function(char *arg, int fd);
int		live_function(char *arg, int fd);
int		unlive_function(char *arg, int fd);
int		check_bin(char *tab, char *arg, int fd);
void		transform(char *str, char **arg, int fd);
void		*x_malloc(size_t n);
int		convert_instruction();

#endif /* !ASM_H_ */
