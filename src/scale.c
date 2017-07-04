/*
** scale.c for scale.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:42:41 2017 Hugo WALTER
** Last update Sun May 28 16:46:35 2017 Hugo WALTER
*/

#include "my.h"

void	my_set_scale(t_mapsize *ms)
{
  ms->sc1->scale.x = 0.3;
  ms->sc1->scale.y = 0.3;
  ms->sc1->taillepers.x = 50;
  ms->sc1->taillepers.y = 100;
  ms->sc1->poswait.x = 50;
  ms->sc1->poswait.y = 100;
}

sfVector2f      set_scaling(t_mapsize *ms, sfVector2i mp, char **tab)
{
  if (check_plan(ms, mp, tab) == 1)
    {
      ms->sc1->scale.x = 1;
      ms->sc1->scale.y = 1;
      ms->sc1->taillepers.x = 130;
      ms->sc1->taillepers.y = 300;
      ms->sc1->poswait.x = 80;
      ms->sc1->poswait.y = 250;
    }
  if (check_plan(ms, mp, tab) == 2)
    {
      ms->sc1->scale.x = 0.5;
      ms->sc1->scale.y = 0.5;
      ms->sc1->taillepers.x = 75;
      ms->sc1->taillepers.y = 200;
      ms->sc1->poswait.x = 75;
      ms->sc1->poswait.y = 190;
    }
  if (check_plan(ms, mp, tab) == 3)
    my_set_scale(ms);
  return (ms->sc1->scale);
}
