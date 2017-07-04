/*
** txt_sc2_take.c for txt_sc2_take.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 20:06:44 2017 Hugo WALTER
** Last update Sun May 28 16:53:08 2017 Hugo WALTER
*/

#include "my.h"

int     update_take(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawText(ms->window, ms->sc2->txttake, NULL);
  if (ms->sc2->stock.x == 800 && ms->sc2->stock.y == 800)
    {
      sfTexture_updateFromPixels(ms->sc2->tfw, ms->structure->pixels,
				 ms->structure->width,
				 ms->structure->height, 0, 0);
      sfRenderWindow_drawSprite(ms->window, ms->sc2->imagefw, NULL);
    }
  else
    {
      sfTexture_updateFromPixels(ms->sc2->twait, ms->structure->pixels,
				 ms->structure->width,
				 ms->structure->height, 0, 0);
      sfRenderWindow_drawSprite(ms->window, ms->sc2->imagew, NULL);
    }
  sfRenderWindow_display(ms->window);
  return (0);
}

int     set_text_take(t_mapsize *ms)
{
  sfFont        *font;

  font = sfFont_createFromFile("font/ecriture.ttf");
  sfText_setFont(ms->sc2->txttake, font);
  sfText_setCharacterSize(ms->sc2->txttake, 50);
  sfText_setPosition(ms->sc2->txttake, ms->sc2->postake);
  return (0);
}

int     set_take(t_mapsize *ms)
{
  ms->sc2->postake.x = 1130;
  ms->sc2->postake.y = 430;
  ms->sc2->txttake = sfText_create();
  sfText_setString(ms->sc2->txttake, "Take");
  set_text_take(ms);
  return (0);
}

int     draw_take(t_mapsize *ms)
{
  ms->sc2->color.r = 255;
  ms->sc2->color.g = 255;
  ms->sc2->color.b = 255;
  ms->sc2->color.a = 255;
  set_take(ms);
  sfText_setColor(ms->sc2->txttake, ms->sc2->color);
  update_take(ms);
  return (0);
}

int     free_take(t_mapsize *ms)
{
  free(ms->sc2->txttake);
  return (0);
}
