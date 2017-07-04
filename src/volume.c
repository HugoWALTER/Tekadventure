/*
** volume.c for volume in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  2 17:58:09 2017 Hugo WALTER
** Last update Sun May 28 16:55:25 2017 Hugo WALTER
*/

#include "my.h"

int     update_nbvol(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->st->txtset, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->st->spt, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->st->svolup, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->st->svoldown, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->st->stheme, NULL);
  sfRenderWindow_drawSprite(ms->window, ms->st->stheme2, NULL);
  sfRenderWindow_drawText(ms->window, ms->st->volume, NULL);
  sfRenderWindow_drawText(ms->window, ms->st->nbvol, NULL);
  sfRenderWindow_drawText(ms->window, ms->st->valider, NULL);
  sfRenderWindow_drawText(ms->window, ms->st->themes, NULL);
  sfRenderWindow_drawText(ms->window, ms->st->themename1, NULL);
  sfRenderWindow_drawText(ms->window, ms->st->themename2, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     set_nbvol(t_mapsize *ms)
{
  sfFont        *font;
  static int	test;

  ms->st->posnbvol.x = 700;
  ms->st->posnbvol.y = 220;
  font = sfFont_createFromFile("font/ecriture.ttf");
  ms->st->nbvol = sfText_create();
  sfText_setString(ms->st->nbvol, ms->st->voltxt);
  sfText_setFont(ms->st->nbvol, font);
  sfText_setCharacterSize(ms->st->nbvol, 150);
  sfText_setPosition(ms->st->nbvol, ms->st->posnbvol);
  return (0);
}

int     draw_volume_text(t_mapsize *ms)
{
  sfColor       color;

  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
  set_nbvol(ms);
  sfText_setColor(ms->st->nbvol, color);
  update_nbvol(ms);
  return (0);
}

int     define_vol(t_mapsize *ms, int i)
{
  char  *vol[11];

  vol[0] = "0";
  vol[1] = "10";
  vol[2] = "20";
  vol[3] = "30";
  vol[4] = "40";
  vol[5] = "50";
  vol[6] = "60";
  vol[7] = "70";
  vol[8] = "80";
  vol[9] = "90";
  vol[10] = "100";
  ms->st->vol = gnb(vol[i]);
  ms->st->voltxt = vol[i];
  return (ms->st->vol);
}

int     set_volume(t_mapsize *ms, sfVector2i mp)
{
  static int    i = 5;
  sfClock	*clock;

  if (mp.x > 1645 && mp.x < 1770 && mp.y > 194 && mp.y < 304)
    if (i >= 0 && i < 10)
      define_vol(ms, i += 1);
  if (mp.x > 1645 && mp.x < 1770 && mp.y > 395 && mp.y < 506)
    if (i > 0 && i <= 10)
      define_vol(ms, i -= 1);
  clock = sfClock_create();
  while ((sfTime_asMilliseconds(sfClock_getElapsedTime(clock))) < 50);
  sfClock_destroy(clock);
  sfMusic_setVolume(ms->menu, ms->st->vol);
  return (0);
}
