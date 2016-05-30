/*
** simple_left.c for simple_left in /home/hubert_i/42SH
**
** Made by Hubert Leo
** Login   <hubert_i@epitech.net>
**
** Started on  Thu May 26 01:33:04 2016 Hubert Leo
** Last update Mon May 30 15:36:04 2016 Gambini Lucas
*/

# include 	"42.h"

int		simple_left(t_cmd *cmd, t_list *list, char **env, int builtin)
{
  t_red		var;
  int		fd;
  int		reset;

  reset = dup(0);
  init_simpleleft(cmd->cmd, &var);
  show_tab(var.cmd);
  printf("name: %s\n", var.name);
  var.is_builtin = builtin;
  if ((fd = open(var.name, O_RDONLY)) == -1)
    return (fprintf(stderr, "Error: %s: %s\n", strerror(errno),
		    var.name) * 0 + FAILURE);
  cmd->pipefd = dup(fd);
  dup2(fd, 0);
  if (exec_left(list, env, var) == FAILURE)
    check_go_on(cmd);
  close(fd);
  free(var.name);
  free_tab(var.cmd);
  dup2(reset, 0);
  return (SUCCESS);
}
