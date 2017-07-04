/*
** update.c for update in /home/walter_h/Infographie/tekadv
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Wed Apr 26 12:20:54 2017 Hugo WALTER
** Last update Sun May 28 16:53:20 2017 Hugo WALTER
*/

#include "my.h"

void    update_texture(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sprite, NULL);
  sfRenderWindow_display(ms->window);
}

int     update_name(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sprite, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->nameport, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->moyenage, NULL);
  sfRenderWindow_display(ms->window);
}

int     update_night(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sprite, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->night, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->matelot, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->meurtre, NULL);
  sfRenderWindow_display(ms->window);
}

int     update_taverne(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sprite, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->tanight, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->village, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->quete, NULL);
  sfRenderWindow_drawText(ms->window, ms->play->deboire, NULL);
  sfRenderWindow_display(ms->window);
}
