/*
** scroll_port_sky.c for scroll_port_sky in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Mon May  8 15:29:56 2017 Hugo WALTER
** Last update Sun May 28 16:47:58 2017 Hugo WALTER
*/

#include "my.h"

int     update_port(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->port->sstar1, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->port->sstar2, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->port->sport, NULL);
  sfRenderWindow_drawText(ms->window, ms->sc2->txtfige, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     move(t_mapsize *ms)
{
  sfSprite_setPosition(ms->port->sstar2, ms->port->poss2);
  update_port(ms);
  ms->port->poss2.x += 0;
  ms->port->poss2.y -= ms->port->speedsky;
  sfSprite_setPosition(ms->port->sstar1, ms->port->poss1);
  ms->port->poss1.x += 0;
  ms->port->poss1.y -= ms->port->speedsky;
  return (0);
}

int     scrolling_star2(t_mapsize *ms)
{
  static int    i = 0;

  while (ms->port->posstar1.y < -540)
    {
      ms->port->posstar1 = sfSprite_getPosition(ms->port->sstar1);
      ms->port->posstar2 = sfSprite_getPosition(ms->port->sstar2);
      if ((int)ms->port->posstar2.y == -540)
	{
	  i++;
	  ms->port->poss1.x = 0;
	  ms->port->poss1.y = 580;
	}
      move(ms);
      if ((int)ms->port->posstar1.y == -540 && i < 1)
	{
	  ms->port->poss2.x = 0;
	  ms->port->poss2.y = 580;
	  scrolling_star2(ms);
	}
      if (i == 1)
	return (1);
    }
  return (0);
}

int     create_texture_port(t_mapsize *ms)
{
  ms->port->poss1.x = 0;
  ms->port->poss1.y = 0;
  ms->port->poss2.x = 0;
  ms->port->poss2.y = 580;
  ms->port->tstar1 = sfTexture_createFromFile("addon/stars.png", NULL);
  ms->port->tstar2 = sfTexture_createFromFile("addon/stars.png", NULL);
  ms->port->tport = sfTexture_createFromFile("addon/port.png", NULL);
  ms->port->sstar1 = sfSprite_create();
  ms->port->sstar2 = sfSprite_create();
  ms->port->sport = sfSprite_create();
  sfSprite_setTexture(ms->port->sstar1, ms->port->tstar1, sfTrue);
  sfSprite_setTexture(ms->port->sstar2, ms->port->tstar2, sfTrue);
  sfSprite_setTexture(ms->port->sport, ms->port->tport, sfTrue);
  sfSprite_setPosition(ms->port->sstar2, ms->port->poss2);
  sfRenderWindow_drawSprite(ms->window, ms->port->sstar1, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->port->sstar2, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->port->sport, NULL);
  return (0);
}

int     scrolling_port(t_mapsize *ms)
{
  static int	i = 0;

  if (i == 0)
    {
      create_texture_port(ms);
      draw_fige(ms);
      i = 1;
    }
  while (ms->port->poss1.y > -1080)
    {
      ms->port->posstar1 = sfSprite_getPosition(ms->port->sstar1);
      if (ms->port->posstar1.y < -540)
	if (scrolling_star2(ms) == 1)
	  return (0);
      sfSprite_setPosition(ms->port->sstar1, ms->port->poss1);
      update_port(ms);
      ms->port->poss1.y -= ms->port->speedsky;
      ms->port->poss1.x += 0;
    }
  return (0);
}
