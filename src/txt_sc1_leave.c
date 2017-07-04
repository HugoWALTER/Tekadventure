/*
** txt_sc1_leave.c for txt_sc1_leave in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:39:43 2017 Hugo WALTER
** Last update Sun May 28 16:52:49 2017 Hugo WALTER
*/

#include "my.h"

int     update_leave(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_drawText(ms->window, ms->sc1->txtleave, NULL);
  if (ms->sc1->stock.x == 708 && ms->sc1->stock.y == 800)
    {
      sfTexture_updateFromPixels(ms->sc1->tfw, ms->structure->pixels,
				 ms->structure->width,
				 ms->structure->height, 0, 0);
      sfRenderWindow_drawSprite(ms->window, ms->sc1->imagefw, NULL);
    }
  else
    {
      sfTexture_updateFromPixels(ms->sc1->twait, ms->structure->pixels,
				 ms->structure->width,
				 ms->structure->height, 0, 0);
      sfRenderWindow_drawSprite(ms->window, ms->sc1->imagew, NULL);
    }
  sfRenderWindow_display(ms->window);
  return (0);
}

int     set_text_leave(t_mapsize *ms)
{
  sfFont        *font;

  font = sfFont_createFromFile("font/ecriture.ttf");
  sfText_setFont(ms->sc1->txtleave, font);
  sfText_setCharacterSize(ms->sc1->txtleave, 60);
  sfText_setPosition(ms->sc1->txtleave, ms->sc1->posleave);
  return (0);
}

int     set_leave(t_mapsize *ms)
{
  ms->sc1->posleave.x = 400;
  ms->sc1->posleave.y = 390;
  ms->sc1->txtleave = sfText_create();
  sfText_setString(ms->sc1->txtleave, "Leave");
  set_text_leave(ms);
  return (0);
}

int     draw_leave(t_mapsize *ms)
{
  ms->sc1->color.r = 255;
  ms->sc1->color.g = 255;
  ms->sc1->color.b = 255;
  ms->sc1->color.a = 255;
  set_leave(ms);
  sfText_setColor(ms->sc1->txtleave, ms->sc1->color);
  update_leave(ms);
  return (0);
}

int     free_leave(t_mapsize *ms)
{
  free(ms->sc1->txtleave);
  return (0);
}
