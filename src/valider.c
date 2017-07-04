/*
** valider.c for valider in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  2 18:00:25 2017 Hugo WALTER
** Last update Sun May 28 16:54:44 2017 Hugo WALTER
*/

#include "my.h"

int     click_valider(t_mapsize *ms, sfVector2i mp)
{
  if (mp.x > 1497 && mp.x < 1855 && mp.y > 913 && mp.y < 999)
    return (1);
  return (0);
}

int     validate_left(t_mapsize *ms)
{
  ms->st->posvalidatel.x = 40;
  ms->st->posvalidatel.y = 680;
  ms->st->sclvalidate.x = 0.08;
  ms->st->sclvalidate.y = 0.08;
  ms->st->tvalidate = sfTexture_createFromFile("addon/right.png", NULL);
  ms->st->svalidate = sfSprite_create();
  sfSprite_setTexture(ms->st->svalidate, ms->st->tvalidate, sfTrue);
  sfSprite_setPosition(ms->st->svalidate, ms->st->posvalidatel);
  sfSprite_setScale(ms->st->svalidate, ms->st->sclvalidate);
  sfRenderWindow_drawSprite(ms->window, ms->st->svalidate, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_left(t_mapsize *ms)
{
  sfSprite_setTexture(ms->st->svalidate, ms->st->tvalidate, sfTrue);
  sfSprite_setPosition(ms->st->svalidate, ms->st->posvalidatel);
  sfSprite_setScale(ms->st->svalidate, ms->st->sclvalidate);
  sfRenderWindow_drawSprite(ms->window, ms->st->svalidate, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     validate_right(t_mapsize *ms)
{
  ms->st->posvalidater.x = 1200;
  ms->st->posvalidater.y = 680;
  ms->st->sclvalidate.x = 0.08;
  ms->st->sclvalidate.y = 0.08;
  ms->st->tvalidate = sfTexture_createFromFile("addon/right.png", NULL);
  ms->st->svalidate = sfSprite_create();
  sfSprite_setTexture(ms->st->svalidate, ms->st->tvalidate, sfTrue);
  sfSprite_setPosition(ms->st->svalidate, ms->st->posvalidater);
  sfSprite_setScale(ms->st->svalidate, ms->st->sclvalidate);
  sfRenderWindow_drawSprite(ms->window, ms->st->svalidate, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     update_right(t_mapsize *ms)
{
  sfSprite_setTexture(ms->st->svalidate, ms->st->tvalidate, sfTrue);
  sfSprite_setPosition(ms->st->svalidate, ms->st->posvalidater);
  sfSprite_setScale(ms->st->svalidate, ms->st->sclvalidate);
  sfRenderWindow_drawSprite(ms->window, ms->st->svalidate, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}
