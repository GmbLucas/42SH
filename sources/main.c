/*
** main.c for  in /home/xx/Rendu/PSU/42SH
**
** Made by boris saint-bonnet
** Login   <saint-_o@epitech.net>
**
** Started on  Wed May 18 04:19:45 2016 boris saint-bonnet
** Last update Wed May 25 12:27:40 2016 Philippe Lefevre
*/

#include		"42.h"

int			shell(char *env[])
{
  char			*buffer;
  t_list		*list;
  int			value_exit;

  list = NULL;
  if ((list = my_env_in_list(list, env)) == NULL)
    return (FAILURE);
  print_prompt(list);
  path_to_list(list);
  list->do_exit = 0;
  list->value_exit = 0;
  while (!(list->do_exit) && (buffer = get_next_line(0)))
    {
      list = add_history(list, buffer);
      if ((list = get_cmd(list, pre_check(buffer))) == NULL)
	{
	  print_prompt(list);
	  continue;
	}
      exec_scatter(list);
      list = free_cmd(list);
      print_prompt(list);
    }
  value_exit = list->value_exit;
  free_fighter(list);
  return (value_exit);
}

int			main(int ac, char **av, char **env)
{
  (void)ac;
  (void)av;
  return (shell(env));
}
