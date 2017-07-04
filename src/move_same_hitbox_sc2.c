/*
** move_same_hitbox_sc2.c for move_same_hitbox_sc2 in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 20:23:52 2017 Hugo WALTER
** Last update Sun May 28 16:40:37 2017 Hugo WALTER
*/

#include "my.h"

void	move_same_hitbox_sc2_ghb(t_mapsize *ms, char **tab)
{
  if (ms->sc2->up == 4)
    while (ms->sc2->stocklp.y > ms->sc2->mp.y &&
	   check_plan(ms, ms->sc2->mp, tab) != 0)
      {
	plaquette_hauts2(ms, ms->sc2->stocklp);
	update_hauts2(ms);
	ms->sc2->stocklp.y -= 1.3;
      }
  if (ms->sc2->left == 1)
    while (ms->sc2->stocklp.x > ms->sc2->mp.x &&
	   check_plan(ms, ms->sc2->mp, tab) != 0)
      {
	plaquette_gauches2(ms, ms->sc2->stocklp);
	update_gauches2(ms);
	ms->sc2->stocklp.x -= 1.3;
      }
  if (ms->sc2->down == 3)
    while (ms->sc2->stocklp.y < ms->sc2->mp.y &&
	   check_plan(ms, ms->sc2->mp, tab) != 0)
      {
	plaquette_bass2(ms, ms->sc2->stocklp);
	update_bass2(ms);
	ms->sc2->stocklp.y += 1.3;
      }
}

int     move_sprite_same_hitboxs2(t_mapsize *ms, char **tab)
{
  ms->sc2->stocklp.x = ms->sc2->lastpos.x;
  ms->sc2->stocklp.y = ms->sc2->lastpos.y;
  ms->sc2->scl = set_scalings2(ms, ms->sc2->mp, tab);
  if (ms->sc2->right == 2)
    {
      while (ms->sc2->stocklp.x < ms->sc2->mp.x &&
	     check_plan(ms, ms->sc2->mp, tab) != 0)
	{
	  plaquette_droites2(ms, ms->sc2->stocklp);
	  update_droites2(ms);
	  ms->sc2->stocklp.x += 1.3;
	}
    }
  move_same_hitbox_sc2_ghb(ms, tab);
  still_waiting_faces2(ms, ms->sc2->mp);
  update_waits2(ms);
  return (0);
}

int     update_fwaits2(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->sc2->tfw, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sstar, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->sport, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imagefw, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     first_faces2(t_mapsize *ms, sfVector2i mvm)
{
  sfVector2f    tmp;
  sfVector2f    scale;

  tmp.x = mvm.x;
  tmp.y = mvm.y;
  scale.x = 1;
  scale.y = 1;
  ms->sc2->imagefw = sfSprite_create();
  ms->sc2->tfw = sfTexture_createFromFile("addon/face_wait.png", NULL);
  sfSprite_setTexture(ms->sc2->imagefw, ms->sc2->tfw, sfTrue);
  sfSprite_setPosition(ms->sc2->imagefw, tmp);
  sfSprite_setScale(ms->sc2->imagefw, scale);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imagefw, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     init_pos_players2(t_mapsize *ms)
{
  ms->sc2->lastpos.x = ms->sc2->stock.x;
  ms->sc2->lastpos.y = ms->sc2->stock.y;
  first_faces2(ms, ms->sc2->stock);
  update_fwaits2(ms);
}
