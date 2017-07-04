/*
** scales2.c for scales2.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:42:41 2017 Hugo WALTER
** Last update Sun May 28 16:46:51 2017 Hugo WALTER
*/

#include "my.h"

void	my_set_plan(t_mapsize *ms)
{
  ms->sc2->scl.x = 0.3;
  ms->sc2->scl.y = 0.3;
  ms->sc2->taillepers.x = 50;
  ms->sc2->taillepers.y = 100;
  ms->sc2->poswait.x = 50;
  ms->sc2->poswait.y = 100;
}

sfVector2f      set_scalings2(t_mapsize *ms, sfVector2i mp, char **tab)
{
  if (check_plan(ms, mp, tab) == 1)
    {
      ms->sc2->scl.x = 1;
      ms->sc2->scl.y = 1;
      ms->sc2->taillepers.x = 130;
      ms->sc2->taillepers.y = 300;
      ms->sc2->poswait.x = 80;
      ms->sc2->poswait.y = 250;
    }
  if (check_plan(ms, mp, tab) == 2)
    {
      ms->sc2->scl.x = 0.5;
      ms->sc2->scl.y = 0.5;
      ms->sc2->taillepers.x = 75;
      ms->sc2->taillepers.y = 200;
      ms->sc2->poswait.x = 75;
      ms->sc2->poswait.y = 190;
    }
  if (check_plan(ms, mp, tab) == 3)
    my_set_plan(ms);
  return (ms->sc2->scl);
}
