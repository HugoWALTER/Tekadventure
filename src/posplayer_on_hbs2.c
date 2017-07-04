/*
** posplayer_on_hbs2.c for posplayer_on_hbs2.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:36:48 2017 Hugo WALTER
** Last update Sun May 28 16:45:57 2017 Hugo WALTER
*/

#include "my.h"

int     check_hitboxs2(t_mapsize *ms, char **tab)
{
  if (check_same_boxs2(ms, tab) == 0)
    {
      ms->sc2->nomvm = 0;
      return (0);
    }
  if (check_mv_boxs2(ms, tab) == 1)
    {
      ms->sc2->mvm = 1;
      return (1);
    }
  return (0);
}
