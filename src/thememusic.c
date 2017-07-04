/*
** thememusic.c for thememusic in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  2 18:02:47 2017 Hugo WALTER
** Last update Sun May 28 16:51:47 2017 Hugo WALTER
*/

#include "my.h"

int     set_theme(t_mapsize *ms)
{
  sfFont        *font;

  ms->st->postheme.x = 50;
  ms->st->postheme.y = 450;
  ms->st->postname1.x = 250;
  ms->st->postname1.y = 900;
  ms->st->postname2.x = 850;
  ms->st->postname2.y = 900;
  font = sfFont_createFromFile("font/ecriture.ttf");
  ms->st->themes = sfText_create();
  ms->st->themename1 = sfText_create();
  ms->st->themename2 = sfText_create();
  sfText_setString(ms->st->themes, "THEMES:");
  sfText_setString(ms->st->themename1, "Taverne");
  sfText_setString(ms->st->themename2, "Piraterie");
  sfText_setFont(ms->st->themes, font);
  sfText_setFont(ms->st->themename1, font);
  sfText_setFont(ms->st->themename2, font);
  sfText_setCharacterSize(ms->st->themes, 100);
  sfText_setCharacterSize(ms->st->themename1, 70);
  sfText_setCharacterSize(ms->st->themename2, 70);
  sfText_setPosition(ms->st->themes, ms->st->postheme);
  sfText_setPosition(ms->st->themename1, ms->st->postname1);
  sfText_setPosition(ms->st->themename2, ms->st->postname2);
  return (0);
}

int     themes(t_mapsize *ms)
{
  sfColor       color;

  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
  set_theme(ms);
  sfText_setColor(ms->st->themes, color);
  sfText_setColor(ms->st->themename1, color);
  sfText_setColor(ms->st->themename2, color);
  return (0);
}

int     set_texture(t_mapsize *ms)
{
  ms->st->spt = sfSprite_create();
  ms->st->svolup = sfSprite_create();
  ms->st->svoldown = sfSprite_create();
  ms->st->stheme = sfSprite_create();
  ms->st->stheme2 = sfSprite_create();
  sfSprite_setTexture(ms->st->spt, ms->st->txtset, sfTrue);
  sfSprite_setTexture(ms->st->svolup, ms->st->tvolup, sfTrue);
  sfSprite_setTexture(ms->st->svoldown, ms->st->tvoldown, sfTrue);
  sfSprite_setTexture(ms->st->stheme, ms->st->ttheme, sfTrue);
  sfSprite_setTexture(ms->st->stheme2, ms->st->ttheme2, sfTrue);
  sfSprite_setPosition(ms->st->svolup, ms->st->posvolup);
  sfSprite_setPosition(ms->st->svoldown, ms->st->posvoldown);
  sfSprite_setPosition(ms->st->stheme, ms->st->posimgtheme1);
  sfSprite_setPosition(ms->st->stheme2, ms->st->posimgtheme2);
  sfSprite_setScale(ms->st->svolup, ms->st->sclvol);
  sfSprite_setScale(ms->st->svoldown, ms->st->sclvol);
  sfSprite_setScale(ms->st->stheme, ms->st->sclvol);
  sfSprite_setScale(ms->st->stheme2, ms->st->sclvol);
  return (0);
}

int     select_play(t_mapsize *ms)
{
  static int    elem;

  sfMusic_destroy(ms->menu);
  titlescreen(ms);
  if (ms->st->wasinset == 1)
    destroy_settings(ms);
  destroy_play(ms);
  elem = 1;
  return (elem);
}
