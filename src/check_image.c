/*
** check_image.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Sat May 27 14:11:50 2017 clem
** Last update Sun May 28 16:28:01 2017 Hugo WALTER
*/

#include "my.h"

char	*set_image(char **tab, t_mapsize *ms, int i)
{
  char	*tmp;
  int	j;

  while (my_strcmp(tab[i], "\n") != 0)
    {
      j = 0;
      if ((tmp = malloc(sizeof(my_strlen(tab[i])))) == NULL)
	return (NULL);
      while (tab[i][j] && tab[i][j] != '=')
	tmp[j] = tab[i][j++];
      tmp[j] = '\0';
    }
  return (tmp);
}
