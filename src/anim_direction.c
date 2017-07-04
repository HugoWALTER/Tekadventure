/*
** anim_direction.c for anim_direction in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:46:44 2017 Hugo WALTER
** Last update Sun May 28 16:24:06 2017 Hugo WALTER
*/

#include "my.h"

void    plaquette_droite(t_mapsize *ms, sfVector2f mvm)
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
  mvm.x -= ms->sc1->taillepers.x;
  mvm.y -= ms->sc1->taillepers.y;
  if (mvm.x >= 1920)
    mvm.x = -60;
  ms->sc1->imaged = sfSprite_create();
  ms->sc1->tdroite = sfTexture_createFromFile("addon/Plaque_droite.png",
					      &area);
  sfSprite_setTexture(ms->sc1->imaged, ms->sc1->tdroite, sfTrue);
  sfSprite_setPosition(ms->sc1->imaged, mvm);
  sfSprite_setScale(ms->sc1->imaged, ms->sc1->scale);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imaged, NULL);
  sfRenderWindow_display(ms->window);
}

void	plaquette_gauche(t_mapsize *ms, sfVector2f mvm)
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
  mvm.x -= ms->sc1->taillepers.x;
  mvm.y -= ms->sc1->taillepers.y;
  if (mvm.x <= 0)
    mvm.x = 1300;
  ms->sc1->imageg = sfSprite_create();
  ms->sc1->tgauche = sfTexture_createFromFile("addon/Plaque_gauche.png",
					      &area);
  sfSprite_setTexture(ms->sc1->imageg, ms->sc1->tgauche, sfTrue);
  sfSprite_setPosition(ms->sc1->imageg, mvm);
  sfSprite_setScale(ms->sc1->imageg, ms->sc1->scale);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imageg, NULL);
  sfRenderWindow_display(ms->window);
}

void	plaquette_haut(t_mapsize *ms, sfVector2f mvm)
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
  mvm.x -= ms->sc1->taillepers.x;
  mvm.y -= ms->sc1->taillepers.y;
  if (mvm.x <= 0)
    mvm.x = 1300;
  ms->sc1->imageh = sfSprite_create();
  ms->sc1->thaut = sfTexture_createFromFile("addon/Plaque_haut.png",
					    &area);
  sfSprite_setTexture(ms->sc1->imageh, ms->sc1->thaut, sfTrue);
  sfSprite_setPosition(ms->sc1->imageh, mvm);
  sfSprite_setScale(ms->sc1->imageh, ms->sc1->scale);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imageh, NULL);
  sfRenderWindow_display(ms->window);
}

void	plaquette_bas(t_mapsize *ms, sfVector2f mvm)
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
  mvm.x -= ms->sc1->taillepers.x;
  mvm.y -= ms->sc1->taillepers.y;
  if (mvm.y <= 0)
    mvm.y = 1300;
  ms->sc1->imageb = sfSprite_create();
  ms->sc1->tbas = sfTexture_createFromFile("addon/Plaque_bas.png",
					   &area);
  sfSprite_setTexture(ms->sc1->imageb, ms->sc1->tbas, sfTrue);
  sfSprite_setPosition(ms->sc1->imageb, mvm);
  sfSprite_setScale(ms->sc1->imageb, ms->sc1->scale);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->imageb, NULL);
  sfRenderWindow_display(ms->window);
}
