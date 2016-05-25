/*
** double_right.c for  in /home/xx/Rendu/PSU/42SH
** 
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
** 
** Started on  Mon May 23 18:34:11 2016 boris saint-bonnet
** Last update Wed May 25 02:52:21 2016 boris saint-bonnet
*/

# include "42.h"

int             double_right(t_cmd *cmd, t_path *path, char **env)
{
  t_right       var;
  int           fd;

  init_double(cmd->cmd, &var);
  if ((fd = open(var.name, __DOUBLE)) == -1)
    return (FAILURE);
  exec_right(fd, path, env, var);
  close(fd);
  free(var.name);
  free_tab(var.cmd);
  return (SUCCESS);
}
