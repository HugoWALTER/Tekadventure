/*
** create_port.c for create_port in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 21:20:49 2017 Hugo WALTER
** Last update Sun May 28 16:34:10 2017 Hugo WALTER
*/

#include "my.h"

int     update_ports2(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->tport, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     create_port(t_mapsize *ms)
{
  sfVector2f	posstar;

  posstar.x = 0;
  posstar.y = -520;
  ms->sc2->tport = sfTexture_createFromFile("addon/port.png", NULL);
  ms->sc2->tstar = sfTexture_createFromFile("addon/stars.png", NULL);
  ms->sc2->sport = sfSprite_create();
  ms->sc2->sstar = sfSprite_create();
  sfSprite_setTexture(ms->sc2->sport, ms->sc2->tport, sfTrue);
  sfSprite_setTexture(ms->sc2->sstar, ms->sc2->tstar, sfTrue);
  sfSprite_setPosition(ms->sc2->sstar, posstar);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  return (0);
}
