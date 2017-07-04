/*
** scroll_credits.c for scroll_credits in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May  6 17:39:27 2017 Hugo WALTER
** Last update Sun May 28 16:47:30 2017 Hugo WALTER
*/

#include "my.h"

int     scroll_create(t_mapsize *ms)
{
  static int     dec;

  if (ms->cd->poscreated.y > -130)
    {
      ms->cd->poscreated.y -= ms->cd->speedcd;
      sfText_setPosition(ms->cd->created, ms->cd->poscreated);
      if ((int)ms->cd->poscreated.y == 870)
	dec = 1;
    }
  return (dec);
}

int     scroll_hugo(t_mapsize *ms, int dec)
{
  static int    hugo;

  if (ms->cd->possddsgn.y > - 130 && dec >= 1)
    {
      ms->cd->possddsgn.y -= ms->cd->speedcd;
      ms->cd->poshugo.y -= ms->cd->speedcd;
      sfText_setPosition(ms->cd->soundsgn, ms->cd->possddsgn);
      sfText_setPosition(ms->cd->hugo, ms->cd->poshugo);
      if ((int)ms->cd->possddsgn.y == 870)
	hugo = 2;
    }
  return (hugo);
}

int     scroll_clement(t_mapsize *ms, int dec)
{
  static int    clement;

  if (ms->cd->posproject.y > -130 && dec >= 2)
    {
      ms->cd->posproject.y -= ms->cd->speedcd;
      ms->cd->posclement.y -= ms->cd->speedcd;
      sfText_setPosition(ms->cd->projectld, ms->cd->posproject);
      sfText_setPosition(ms->cd->clement, ms->cd->posclement);
      if ((int)ms->cd->posproject.y == 870)
	clement = 3;
    }
  return (clement);
}

int     scroll_francois(t_mapsize *ms, int dec)
{
  static int    francois;

  if (ms->cd->posgraphiste.y > -130 && dec >= 3)
    {
      ms->cd->posgraphiste.y -= ms->cd->speedcd;
      ms->cd->posfrancois.y -= ms->cd->speedcd;
      sfText_setPosition(ms->cd->graphiste, ms->cd->posgraphiste);
      sfText_setPosition(ms->cd->francois, ms->cd->posfrancois);
      if ((int)ms->cd->posgraphiste.y == 870)
	francois = 4;
    }
  return (francois);
}

int     scroll_fin(t_mapsize *ms, int dec)
{
  if (ms->cd->posthx.y > -130 && dec >= 4)
    {
      ms->cd->posthx.y -= ms->cd->speedcd;
      sfText_setPosition(ms->cd->thx, ms->cd->posthx);
    }
  return (0);
}
