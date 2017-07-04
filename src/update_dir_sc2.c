/*
** update_dir_sc2.c for update_dir_sc2 in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 20:13:44 2017 Hugo WALTER
** Last update Sun May 28 16:53:50 2017 Hugo WALTER
*/

#include "my.h"

int     update_droites2(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->tdroite, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imaged, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->carteflot, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_gauches2(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->tgauche, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imageg, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->carteflot, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_hauts2(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->thaut, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imageh, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->carteflot, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_bass2(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->tbas, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imageb, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->carteflot, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_waits2(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->twait, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imagew, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}
