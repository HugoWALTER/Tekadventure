/*
** anim_dir_s2.c for anim_dir_s2 in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 20:17:50 2017 Hugo WALTER
** Last update Sun May 28 16:25:50 2017 Hugo WALTER
*/

#include "my.h"

void    plaquette_droites2(t_mapsize *ms, sfVector2f mvm)
{
  static sfIntRect      area = {0, 0, 330, 433};
  static int            frame = 0;

  if (frame++ == 30)
    {
      area.left += 330;
      if (area.left > 1920)
	area.left = 0;
      frame = 0;
    }
  mvm.x -= ms->sc2->taillepers.x;
  mvm.y -= ms->sc2->taillepers.y;
  if (mvm.x >= 1920)
    mvm.x = -60;
  ms->sc2->imaged = sfSprite_create();
  ms->sc2->tdroite = sfTexture_createFromFile("addon/Plaque_droite.png",
					      &area);
  sfSprite_setTexture(ms->sc2->imaged, ms->sc2->tdroite, sfTrue);
  sfSprite_setPosition(ms->sc2->imaged, mvm);
  sfSprite_setScale(ms->sc2->imaged, ms->sc2->scl);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imaged, NULL);
  sfRenderWindow_display(ms->window);
}

void	plaquette_gauches2(t_mapsize *ms, sfVector2f mvm)
{
  static sfIntRect      area = {0, 0, 330, 433};
  static int            frame = 0;

  if (frame++ == 30)
    {
      area.left += 331;
      if (area.left > 1920)
	area.left = 0;
      frame = 0;
    }
  mvm.x -= ms->sc2->taillepers.x;
  mvm.y -= ms->sc2->taillepers.y;
  if (mvm.x <= 0)
    mvm.x = 1300;
  ms->sc2->imageg = sfSprite_create();
  ms->sc2->tgauche = sfTexture_createFromFile("addon/Plaque_gauche.png",
					      &area);
  sfSprite_setTexture(ms->sc2->imageg, ms->sc2->tgauche, sfTrue);
  sfSprite_setPosition(ms->sc2->imageg, mvm);
  sfSprite_setScale(ms->sc2->imageg, ms->sc2->scl);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imageg, NULL);
  sfRenderWindow_display(ms->window);
}

void	plaquette_hauts2(t_mapsize *ms, sfVector2f mvm)
{
  static sfIntRect      area = {0, 0, 210, 433};
  static int            frame = 0;

  if (frame++ == 30)
    {
      area.left += 211;
      if (area.left > 840)
	area.left = 0;
      frame = 0;
    }
  mvm.x -= ms->sc2->taillepers.x;
  mvm.y -= ms->sc2->taillepers.y;
  if (mvm.x <= 0)
    mvm.x = 1300;
  ms->sc2->imageh = sfSprite_create();
  ms->sc2->thaut = sfTexture_createFromFile("addon/Plaque_haut.png",
					    &area);
  sfSprite_setTexture(ms->sc2->imageh, ms->sc2->thaut, sfTrue);
  sfSprite_setPosition(ms->sc2->imageh, mvm);
  sfSprite_setScale(ms->sc2->imageh, ms->sc2->scl);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imageh, NULL);
  sfRenderWindow_display(ms->window);
}

void	plaquette_bass2(t_mapsize *ms, sfVector2f mvm)
{
  static sfIntRect      area = {0, 0, 210, 433};
  static int            frame = 0;

  if (frame++ == 30)
    {
      area.left += 211;
      if (area.left > 840)
	area.left = 0;
      frame = 0;
    }
  mvm.x -= ms->sc2->taillepers.x;
  mvm.y -= ms->sc2->taillepers.y;
  if (mvm.y <= 0)
    mvm.y = 1300;
  ms->sc2->imageb = sfSprite_create();
  ms->sc2->tbas = sfTexture_createFromFile("addon/Plaque_bas.png", &area);
  sfSprite_setTexture(ms->sc2->imageb, ms->sc2->tbas, sfTrue);
  sfSprite_setPosition(ms->sc2->imageb, mvm);
  sfSprite_setScale(ms->sc2->imageb, ms->sc2->scl);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imageb, NULL);
  sfRenderWindow_display(ms->window);
}

int     still_waiting_faces2(t_mapsize *ms, sfVector2i mvm)
{
  sfVector2f    tmp;

  tmp.x = mvm.x;
  tmp.y = mvm.y;
  tmp.x -= ms->sc2->poswait.x;
  tmp.y -= ms->sc2->poswait.y;
  ms->sc2->imagew = sfSprite_create();
  ms->sc2->twait = sfTexture_createFromFile("addon/face_wait.png", NULL);
  sfSprite_setTexture(ms->sc2->imagew, ms->sc2->twait, sfTrue);
  sfSprite_setPosition(ms->sc2->imagew, tmp);
  sfSprite_setScale(ms->sc2->imagew, ms->sc2->scl);
  sfRenderWindow_drawSprite(ms->window, ms->sc2->imagew, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}
