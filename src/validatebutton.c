/*
** validatebutton.c for validatebutton in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  2 18:06:48 2017 Hugo WALTER
** Last update Sun May 28 16:54:22 2017 Hugo WALTER
*/

#include "my.h"

int     set_valider(t_mapsize *ms)
{
  sfFont        *font;

  ms->st->posvalider.x = 1500;
  ms->st->posvalider.y = 900;
  font = sfFont_createFromFile("font/ecriture.ttf");
  ms->st->valider = sfText_create();
  sfText_setString(ms->st->valider, "VALIDER");
  sfText_setFont(ms->st->valider, font);
  sfText_setCharacterSize(ms->st->valider, 80);
  sfText_setPosition(ms->st->valider, ms->st->posvalider);
  return (0);
}

int     button_valider(t_mapsize *ms)
{
  sfColor       color;

  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
  set_valider(ms);
  sfText_setColor(ms->st->valider, color);
  return (0);
}
