/*
** double_left.c for 42sh in C:\Users\gambin_l\42SH\sources\redirect
**
** Made by Gambini Lucas
** Login   <Lucas Gambini@epitech.net>
**
** Started on  Mon May 30 10:56:47 2016 Gambini Lucas
** Last update Wed Jun 01 03:43:22 2016 Philippe Lefevre
*/

#include 		"42.h"

char			*my_concate(char *base, char *add)
{
  char			*ret;
  int			i;
  int			j;

  if (base == NULL || add == NULL)
    return (NULL);
  if ((ret = malloc(sizeof(char)
		    * (strlen(base) + strlen(add) + 2))) == NULL)
    return (NULL);
  i = -1;
  while (base[++i] != '\0')
    ret[i] = base[i];
  ret[i++] = '\n';
  j = 0;
  while (add[j] != '\0')
    ret[i++] = add[j++];
  ret[i] = '\0';
  return (ret);
}

char			*get_buffer(t_red var)
{
  char			*buff;
  char			*res;

  res = NULL;
  while (write(1, "? ", 2) && (buff = get_next_line(0)))
    {
      if (strcmp(buff, var.name) == 0)
	break;
      if (!res)
	res = strdup(buff);
      else
	res = my_concate(res, buff);
      free(buff);
    }
  return (res);
}

int             	double_left(t_cmd *cmd, t_list *list,
				    char **env, int builtin)
{
  t_red       		var;
  char			*buff;

  init_double_left(cmd->cmd, &var);
  var.is_builtin = builtin;
  buff = get_buffer(var);
  if (buff)
    printf("%s\n", buff);
  if (exec_left(list, env, var) == FAILURE)
    check_go_on(cmd);
  free(var.name);
  free_tab(var.cmd);
  return (SUCCESS);
}
