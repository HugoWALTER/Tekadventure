/*
** update_fwait.c for update_fwait.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 23:40:55 2017 Hugo WALTER
** Last update Sun May 28 16:54:11 2017 Hugo WALTER
*/

#include "my.h"

int     update_fwait(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc1->tfw, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imagefw, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}
