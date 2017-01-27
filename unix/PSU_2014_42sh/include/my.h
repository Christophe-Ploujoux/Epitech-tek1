/*
** my.h for 42sh in /home/ploujo_c/rendu/unix/PSU_2014_42sh/include
** 
** Made by Ploujoux Christophe
** Login   <ploujo_c@epitech.net>
** 
** Started on  Sun May 24 15:58:46 2015 Ploujoux Christophe
** Last update Fri Jun  5 03:50:15 2015 Ploujoux Christophe
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>

typedef struct	s_list
{
  char		*data;
  struct s_list	*next;
  struct s_list *prev;
}		t_list;

t_list	*my_setenv(char *buffer, t_list *save);
void	my_unsetenv(char **buffer, t_list *save, char **env);
t_list	*my_env(t_list *save, char **env);
int	my_builtins(char **buffer, t_list *save, char **env, char *buffer2);
char	*my_pwd(char *save, char *cat, char **tab, char *pwd);
char	*my_oldpwd(char *save, char *pwd);
int	my_cd(char **buffer, t_list *save);
char	*my_access(char **buffer, char **env);
int	my_exec(char **buffer, char **env);
int	my_exec_pipe(char **buffer, char **env);
void	my_exit(char **buffer, t_list *save, char *buffer2);
char	*get_env(char **env, char *name);
char	*get_save(t_list *save, char *name);
t_list	*init_list(void);
int	ad_before_racine(t_list *elem, char *data);
void	my_show_list(t_list *list);
int	size_list(t_list *list);
void	free_list(t_list *list);
int	check_cmd(char **buffer, char *buffer2, t_list *save, char **env);
void	aff_tab(char **tab);
int	my_shell(char **env);
int	main(int argc, char **argv, char **env);
char	*prompt_buffer(t_list *save);
void	control_c();
int	redir_left(char *str, t_list *save, char **env);
int	redir_right(char *str, t_list *save, char **env);
void	redir_end_left();
int	redir_end_right(char *str, t_list *save, char **env);
void	redir(char *str, t_list *save, char **env);
void	my_free_tab(char **tab);
char	*my_strcat(char *dest, char *src);
char	*my_strcat2(char *dest, char *src);
char	**cat_tab(char **tab, char **buffer);
int	my_putchar(char c);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
int	my_count_word(char *str, char carac1);
int	my_word(char *str, char a);
char	**loop(char carac, int c, char **tab, char *str);
char	**str_to_word_tab(char *str, char *token);
int	check_redir(char *buffer);
char	*get_next_line(int fd);
char	**check_separator(char *buffer);
void	my_echo(char **buffer);
void	opt_n(char **buffer);
void	aff_class(char *buffer);
int	number_option(char **buffer);
int	the_pipe(char *str, char **env);

#endif /* !MY_H_ */
