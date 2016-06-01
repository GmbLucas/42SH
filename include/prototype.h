/*
** prototype.h for  in /home/xx/Rendu/PSU/42SH
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Wed May 18 05:04:14 2016 boris saint-bonnet
** Last update Wed Jun 01 03:58:14 2016 Philippe Lefevre
*/

#ifndef 		_PROTOTYPE_H_
# define 		_PROTOTYPE_H_

/*
** PARSING
*/

char    		*my_strcut(char *s, int beg, int nb, int end);
char    		*check_sep(char *s, char sep);
char    		*check_separator(char *s);
/*
** STRING
*/
int			open_history(char *s);
int			my_strlen(char *s);
int     		tab_lenght(char **tab);
char			*my_strdup(char *src);
char			*my_strndup(const char *src, size_t n);
char    		*my_epurstr(char *str);
char			*strdup(const char *chaine);
char			*get_current_dir_name(void);
char			*my_strtok(char *str, char *delim);
char			*my_strcat(char *dest, char *src);
char                    *tab_to_cmd(char **tab);

#endif			/* !PROTOTYPE_H__ */
