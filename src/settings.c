/*
** settings.c for settings in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  2 17:53:51 2017 Hugo WALTER
** Last update Sun May 28 16:51:09 2017 Hugo WALTER
*/

#include "my.h"

int     set_settings(t_mapsize *ms)
{
  sfFont        *font;

  ms->st->posvolume.x = 50;
  ms->st->posvolume.y = 250;
  font = sfFont_createFromFile("font/ecriture.ttf");
  ms->st->volume = sfText_create();
  sfText_setString(ms->st->volume, "VOLUME :");
  sfText_setFont(ms->st->volume, font);
  sfText_setCharacterSize(ms->st->volume, 100);
  sfText_setPosition(ms->st->volume, ms->st->posvolume);
  return (0);
}

int     draw_settings(t_mapsize *ms)
{
  sfColor       color;

  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
  set_settings(ms);
  sfText_setColor(ms->st->volume, color);
  return (0);
}

int     pos_settings(t_mapsize *ms)
{
  ms->st->sclvol.x = 0.2;
  ms->st->sclvol.y = 0.2;
  ms->st->posvolup.x = 1650;
  ms->st->posvolup.y = 190;
  ms->st->posvoldown.x = 1650;
  ms->st->posvoldown.y = 390;
  ms->st->posimgtheme1.x = 280;
  ms->st->posimgtheme1.y = 670;
  ms->st->posimgtheme2.x = 900;
  ms->st->posimgtheme2.y = 700;
  return (0);
}

int	init_texture(t_mapsize *ms)
{
  ms->st->txtset = sfTexture_createFromFile("addon/menutitre.jpeg", NULL);
  ms->st->tvolup = sfTexture_createFromFile("addon/upbutton.png", NULL);
  ms->st->tvoldown = sfTexture_createFromFile("addon/downbutton.png",
					      NULL);
  ms->st->ttheme = sfTexture_createFromFile("addon/imgmusictaverne.png",
					    NULL);
  ms->st->ttheme2 = sfTexture_createFromFile("addon/imgmusicpirate.png",
					     NULL);
  return (0);
}

int     create_settings(t_mapsize *ms)
{
  static int    affset = 0;

  if (affset == 0)
    {
      pos_settings(ms);
      button_valider(ms);
      themes(ms);
      init_texture(ms);
      set_texture(ms);
      sfRenderWindow_drawSprite(ms->window, ms->st->spt, NULL);
      sfRenderWindow_drawSprite(ms->window, ms->st->svolup, NULL);
      sfRenderWindow_drawSprite(ms->window, ms->st->svoldown, NULL);
      sfRenderWindow_drawSprite(ms->window, ms->st->stheme, NULL);
      sfRenderWindow_drawSprite(ms->window, ms->st->stheme2, NULL);
      sfRenderWindow_display(ms->window);
      draw_settings(ms);
      affset = 1;
    }
  return (0);
}
