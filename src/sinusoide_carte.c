/*
** sinusoide_carte.c for sinusoide_carte in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 20:29:23 2017 Hugo WALTER
** Last update Sun May 28 16:51:36 2017 Hugo WALTER
*/

#include "my.h"

int     update_cartef(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->tcarte, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->carteflot, NULL);
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

void	init_val(t_mapsize *ms)
{
  ms->sc2->coef = 100;
  ms->sc2->yinit = 540;
  ms->sc2->offset.x = 1140;
  ms->sc2->offset.y = 540;
  ms->sc2->scl.x = 0.3;
  ms->sc2->scl.y = 0.3;
}

void	init_carte(t_mapsize *ms)
{
  ms->sc2->carteflot = sfSprite_create();
  sfSprite_setTexture(ms->sc2->carteflot, ms->sc2->tcarte, sfTrue);
  sfSprite_setPosition(ms->sc2->carteflot, ms->sc2->offset);
  sfSprite_setScale(ms->sc2->carteflot, ms->sc2->scl);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->carteflot, NULL);
}

void	down_carte(t_mapsize *ms)
{
  sfSprite_setPosition(ms->sc2->carteflot, ms->sc2->offset);
  update_cartef(ms);
  ms->sc2->amp -= 0.001;
  ms->sc2->offset.y =
    (ms->sc2->coef * sin(ms->sc2->amp)) + ms->sc2->yinit;
}

int     sinusoide_carte(t_mapsize *ms, char **tab)
{
  init_val(ms);
  if ((ms->sc2->tcarte =
       sfTexture_createFromFile("addon/carte_flot.png", NULL)) == NULL)
    return (84);
  init_carte(ms);
  if (check_hitbox_obj(ms, ms->sc2->mp, tab) != 1)
    {
      while (ms->sc2->offset.y < 590 &&
	     sfMouse_isButtonPressed(sfMouseLeft) != sfTrue &&
	     sfKeyboard_isKeyPressed(sfKeyEscape) != sfTrue)
	{
	  sfSprite_setPosition(ms->sc2->carteflot, ms->sc2->offset);
	  update_cartef(ms);
	  ms->sc2->amp += 0.001;
	  ms->sc2->offset.y =
	    (ms->sc2->coef * sin(ms->sc2->amp)) + ms->sc2->yinit;
	}
      if (ms->sc2->offset.y > 590)
	while (ms->sc2->offset.y > 540 &&
	       sfMouse_isButtonPressed(sfMouseLeft) != sfTrue &&
	       sfKeyboard_isKeyPressed(sfKeyEscape) != sfTrue)
	  down_carte(ms);
    }
  return (0);
}
