/*
** move_same_hitbox.c for move_same_hitbox in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:50:29 2017 Hugo WALTER
** Last update Sun May 28 16:40:08 2017 Hugo WALTER
*/

#include "my.h"

int     still_waiting_face(t_mapsize *ms, sfVector2i mvm)
{
  sfVector2f    tmp;

  tmp.x = mvm.x;
  tmp.y = mvm.y;
  tmp.x -= ms->sc1->poswait.x;
  tmp.y -= ms->sc1->poswait.y;
  ms->sc1->imagew = sfSprite_create();
  ms->sc1->twait = sfTexture_createFromFile("addon/face_wait.png", NULL);
  sfSprite_setTexture(ms->sc1->imagew, ms->sc1->twait, sfTrue);
  sfSprite_setPosition(ms->sc1->imagew, tmp);
  sfSprite_setScale(ms->sc1->imagew, ms->sc1->scale);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imagew, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int	move_same_hitbox_gb(t_mapsize *ms)
{
  if (ms->sc1->left == 1)
    while (ms->sc1->stocklp.x > ms->sc1->mp.x &&
	   check_plan(ms, ms->sc1->mp, ms->hb->sc1) != 0)
      {
	plaquette_gauche(ms, ms->sc1->stocklp);
	update_gauche(ms);
	ms->sc1->stocklp.x -= 1.3;
      }
  if (ms->sc1->down == 3)
    while (ms->sc1->stocklp.y < ms->sc1->mp.y &&
	   check_plan(ms, ms->sc1->mp, ms->hb->sc1) != 0)
      {
	plaquette_bas(ms, ms->sc1->stocklp);
	update_bas(ms);
	ms->sc1->stocklp.y += 1.3;
      }
}

int     move_sprite_same_hitbox(t_mapsize *ms, char **tab)
{
  ms->sc1->stocklp.x = ms->sc1->lastpos.x;
  ms->sc1->stocklp.y = ms->sc1->lastpos.y;
  ms->sc1->scale = set_scaling(ms, ms->sc1->mp, tab);
  if (ms->sc1->right == 2)
    while (ms->sc1->stocklp.x < ms->sc1->mp.x &&
	   check_plan(ms, ms->sc1->mp, ms->hb->sc1) != 0)
      {
	plaquette_droite(ms, ms->sc1->stocklp);
	update_droite(ms);
	ms->sc1->stocklp.x += 1.3;
      }
  if (ms->sc1->up == 4)
    while (ms->sc1->stocklp.y > ms->sc1->mp.y &&
	   check_plan(ms, ms->sc1->mp, ms->hb->sc1) != 0)
      {
	plaquette_haut(ms, ms->sc1->stocklp);
	update_haut(ms);
	ms->sc1->stocklp.y -= 1.3;
      }
  move_same_hitbox_gb(ms);
  still_waiting_face(ms, ms->sc1->mp);
  update_wait(ms);
  return (0);
}

int     first_face(t_mapsize *ms, sfVector2i mvm)
{
  sfVector2f    tmp;
  sfVector2f    scale;

  tmp.x = mvm.x;
  tmp.y = mvm.y;
  scale.x = 1;
  scale.y = 1;
  ms->sc1->imagefw = sfSprite_create();
  ms->sc1->tfw = sfTexture_createFromFile("addon/face_wait.png", NULL);
  sfSprite_setTexture(ms->sc1->imagefw, ms->sc1->tfw, sfTrue);
  sfSprite_setPosition(ms->sc1->imagefw, tmp);
  sfSprite_setScale(ms->sc1->imagefw, scale);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imagefw, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     init_pos_player(t_mapsize *ms)
{
  ms->sc1->lastpos.x = ms->sc1->stock.x;
  ms->sc1->lastpos.y = ms->sc1->stock.y;
  first_face(ms, ms->sc1->stock);
  update_fwait(ms);
}
