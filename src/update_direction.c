/*
** update_direction.c for update_direction.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:44:09 2017 Hugo WALTER
** Last update Sun May 28 16:53:35 2017 Hugo WALTER
*/

#include "my.h"

int     update_droite(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc1->tdroite, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imaged, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_gauche(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc1->tgauche, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imageg, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_haut(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc1->thaut, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imageh, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_bas(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc1->tbas, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imageb, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_wait(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc1->twait, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imagew, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}
