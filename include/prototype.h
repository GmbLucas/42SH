/*
** prototype.h for  in /home/xx/Rendu/PSU/42SH
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Wed May 18 05:04:14 2016 boris saint-bonnet
** Last update Mon May 23 22:59:27 2016 Philippe Lefevre
*/

#ifndef __PROTOTYPE_H__
#define __PROTOTYPE_H__

/*
** PARSING
*/

char	*pre_check(char *s);
char    *my_strcut(char *s, int beg, int nb, int end);
char    *check_sep(char *s, char sep);
char    *check_separator(char *s);

/*
** STRING
*/

int	my_strlen(char *s);
char	*my_strdup(char *src);
char	*my_strndup(const char *src, size_t n);
char    *my_epurstr(char *str);
char	*strdup(const char *chaine);
char	*get_current_dir_name(void);
char	*my_strtok(char *str, char *delim);


void	my_exit(int status);

# endif /* !PROTOTYPE_H__ */
