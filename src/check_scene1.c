/*
** check_scene1.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Sat May 27 14:12:24 2017 clem
** Last update Sun May 28 16:30:50 2017 Hugo WALTER
*/

#include "my.h"

char	*my_hitbox2(t_mapsize *ms, char **tab, int i, int j)
{
  static int	k;

  if (k == 0)
    ms->hb->sc2 = malloc(sizeof(char **) * my_strlen(tab[i]));
  ms->hb->sc2[k] = my_strdup(epur_n(&tab[i][j + 1]));
  k++;
  ms->hb->i2 = k;
}

char	*my_hitbox(t_mapsize *ms, char **tab, int i, int j)
{
  static int	k;

  if (k == 0)
    ms->hb->sc1 = malloc(sizeof(char **) * my_strlen(tab[i]));
  ms->hb->sc1[k] = my_strdup(epur_n(&tab[i][j + 1]));
  k++;
  ms->hb->i = k;
}

char	*set_scene1(char **tab, t_mapsize *ms, int i)
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
      if (my_strcmp("hitbox", tmp) == 0 &&
	  my_hitbox(ms, tab, i, j) == NULL)
	return (NULL);
      i++;
    }
  ms->hb->sc1[ms->hb->i] = NULL;
  return ("No error");
}

char	*set_scene2(char **tab, t_mapsize *ms, int i)
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
      if (my_strcmp("hitbox", tmp) == 0 &&
	  my_hitbox2(ms, tab, i, j) == NULL)
	return (NULL);
      i++;
    }
  ms->hb->sc2[ms->hb->i2] = NULL;
  return ("No error");
}
