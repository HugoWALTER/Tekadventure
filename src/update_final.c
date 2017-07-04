/*
** update_final.c for update_final in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sun May 28 03:16:50 2017 Hugo WALTER
** Last update Sun May 28 16:54:02 2017 Hugo WALTER
*/

#include "my.h"

int     update_fondu(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->send->txture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->send->spt, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_finaltxt(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->send->txture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawText(ms->window, ms->send->txtfinal, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}
