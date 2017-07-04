/*
** create_fige.c for create_fige in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 21:39:14 2017 Hugo WALTER
** Last update Sun May 28 16:33:50 2017 Hugo WALTER
*/

#include "my.h"

int     set_text_fige(t_mapsize *ms)
{
  sfFont        *font;

  font = sfFont_createFromFile("font/quote.ttf");
  sfText_setFont(ms->sc2->txtfige, font);
  sfText_setCharacterSize(ms->sc2->txtfige, 50);
  sfText_setPosition(ms->sc2->txtfige, ms->sc2->posfige);
  return (0);
}

int     set_fige(t_mapsize *ms)
{
  ms->sc2->posfige.x = 540;
  ms->sc2->posfige.y = 300;
  ms->sc2->txtfige = sfText_create();
  sfText_setString(ms->sc2->txtfige,
		   "Fige dans le temps, va vers l'avant...");
  set_text_fige(ms);
  return (0);
}

int     draw_fige(t_mapsize *ms)
{
  ms->sc2->cfige.r = 255;
  ms->sc2->cfige.g = 255;
  ms->sc2->cfige.b = 255;
  ms->sc2->cfige.a = 255;
  set_fige(ms);
  sfText_setColor(ms->sc2->txtfige, ms->sc2->cfige);
  return (0);
}

int     free_fige(t_mapsize *ms)
{
  free(ms->sc2->txtfige);
  return (0);
}
