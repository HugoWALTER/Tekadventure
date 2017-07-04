/*
** posplayer_on_hb.c for posplayer_on_hb.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:36:48 2017 Hugo WALTER
** Last update Sun May 28 16:45:46 2017 Hugo WALTER
*/

#include "my.h"

int     check_hitbox(t_mapsize *ms, char **tab)
{
  if (check_same_box(ms, tab) == 0)
    {
      ms->sc1->nomvm = 0;
      return (0);
    }
  if (check_mv_box(ms, tab) == 1)
    {
      ms->sc1->mvm = 1;
      return (1);
    }
  return (0);
}

char	*ft(char *tab)
{
  char	*str;
  int	i;

  i = 0;
  str = malloc(sizeof(my_strlen(tab)));
  while (tab[i] && tab[i] != ',')
    str[i] = tab[i++];
  str[i] = '\0';
  return (str);
}

char	*st(char *tab)
{
  char	*str;
  int	i;
  int	j;

  i = 0;
  j = 0;
  str = malloc(sizeof(my_strlen(tab)));
  while (tab[i] && tab[i] != ',')
    i++;
  if (tab[i] == ',')
    {
      i++;
      while (tab[i])
	{
	  str[j] = tab[i];
	  i++;
	  j++;
	}
    }
  str[j] = '\0';
  return (str);
}

int     check_hitbox_obj(t_mapsize *ms, sfVector2i mp, char **tab)
{
  if (mp.x > gnb(ft(tab[6])) &&
      mp.x < gnb(st(tab[6])) &&
      mp.y > gnb(ft(tab[7])) &&
      mp.y < gnb(st(tab[7])))
    {
      return (1);
    }
  return (0);
}
