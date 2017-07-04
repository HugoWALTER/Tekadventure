/*
** move_hitbox.c for move_hitbox in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:13:04 2017 Hugo WALTER
** Last update Sun May 28 16:29:26 2017 Hugo WALTER
*/

#include "my.h"

int     direction(t_mapsize *ms)
{
  ms->sc1->lastpos.x = ms->sc1->stock.x;
  ms->sc1->lastpos.y = ms->sc1->stock.y;
  ms->sc1->diffy = ms->sc1->stock.y - ms->sc1->mp.y;
  if (ms->sc1->diffy < 0)
    ms->sc1->down = 3;
  if (ms->sc1->diffy > 0)
    ms->sc1->up = 4;
  if (ms->sc1->mp.x < ms->sc1->stock.x)
    {
      ms->sc1->left = 1;
      ms->sc1->stock.x = ms->sc1->mp.x;
      ms->sc1->stock.y = ms->sc1->mp.y;
    }
  if (ms->sc1->mp.x > ms->sc1->stock.x)
    {
      ms->sc1->right = 2;
      ms->sc1->stock.x = ms->sc1->mp.x;
      ms->sc1->stock.y = ms->sc1->mp.y;
    }
  return (0);
}

int     check_same_box(t_mapsize *ms, char **tab)
{
  if ((ms->sc1->mp.x > gnb(ft(tab[0])) && ms->sc1->mp.x < gnb(st(tab[0])) &&
       ms->sc1->mp.y > gnb(ft(tab[1])) && ms->sc1->mp.y < gnb(st(tab[1]))) &&
      (ms->sc1->lastpos.x > gnb(ft(tab[0])) &&
       ms->sc1->lastpos.x < gnb(st(tab[0])) &&
       ms->sc1->lastpos.y > gnb(ft(tab[1])) &&
       ms->sc1->lastpos.y < gnb(st(tab[1]))))
    return (0);
  if ((ms->sc1->mp.x > gnb(ft(tab[2])) && ms->sc1->mp.x < gnb(st(tab[2])) &&
       ms->sc1->mp.y > gnb(ft(tab[3])) && ms->sc1->mp.y < gnb(st(tab[3]))) &&
      (ms->sc1->lastpos.x > gnb(ft(tab[2])) &&
       ms->sc1->lastpos.x < gnb(st(tab[2])) &&
       ms->sc1->lastpos.y > gnb(ft(tab[3])) &&
       ms->sc1->lastpos.y < gnb(st(tab[3]))))
    return (0);
  if ((ms->sc1->mp.x > gnb(ft(tab[4])) && ms->sc1->mp.x < gnb(st(tab[4])) &&
       ms->sc1->mp.y > gnb(ft(tab[5])) && ms->sc1->mp.y < gnb(st(tab[5]))) &&
      (ms->sc1->lastpos.x > gnb(ft(tab[4])) &&
       ms->sc1->lastpos.x < gnb(st(tab[4])) &&
       ms->sc1->lastpos.y > gnb(ft(tab[5])) &&
       ms->sc1->lastpos.y < gnb(st(tab[5]))))
    return (0);
  return (1);
}

int     check_plan(t_mapsize *ms, sfVector2i mp, char **tab)
{
  if (mp.x > gnb(ft(tab[0])) &&
      mp.x < gnb(st(tab[0])) &&
      mp.y > gnb(ft(tab[1])) &&
      mp.y < gnb(st(tab[1])))
    return (1);
  if (mp.x > gnb(ft(tab[2])) &&
      mp.x < gnb(st(tab[2])) &&
      mp.y > gnb(ft(tab[3])) &&
      mp.y < gnb(st(tab[3])))
    return (2);
  if (mp.x > gnb(ft(tab[4])) &&
      mp.x < gnb(st(tab[4])) &&
      mp.y > gnb(ft(tab[5])) &&
      mp.y < gnb(st(tab[5])))
    return (3);
  if (mp.x > gnb(ft(tab[6])) &&
      mp.x < gnb(st(tab[6])) &&
      mp.y > gnb(ft(tab[7])) &&
      mp.y < gnb(st(tab[7])))
    return (4);
  return (0);
}
