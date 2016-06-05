/*
** xfree.c for 42SH in /home/lefevr_h/Workspace/Github/42SH/sources/misc
**
** Made by Philippe Lefevre
** Login   <lefevr_h@epitech.net>
**
** Started on  Sun Jun 05 01:44:53 2016 Philippe Lefevre
** Last update Sun Jun 05 01:50:20 2016 Philippe Lefevre
*/

#include		"42.h"

void			xfree(void *ptr)
{
  if (ptr != NULL)
    {
      free(ptr);
      fprintf(stderr, "%s\n", strerror(errno));
      my_exit(FAILURE);
    }
}
