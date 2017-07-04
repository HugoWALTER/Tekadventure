/*
** menu.c for menu in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  2 17:48:54 2017 Hugo WALTER
** Last update Sun May 28 16:39:44 2017 Hugo WALTER
*/

#include "my.h"

int     update_menu(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->tmenu, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->smenu, NULL);
  sfRenderWindow_drawText(ms->window, ms->playbutton, NULL);
  sfRenderWindow_drawText(ms->window, ms->settings, NULL);
  sfRenderWindow_drawText(ms->window, ms->credits, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     set_menu(t_mapsize *ms)
{
  sfFont        *font;

  ms->posplay.x = 855;
  ms->posplay.y = 250;
  ms->possett.x = 755;
  ms->possett.y = 500;
  ms->poscred.x = 855;
  ms->poscred.y = 730;
  font = sfFont_createFromFile("font/ecriture.ttf");
  ms->playbutton = sfText_create();
  ms->settings = sfText_create();
  ms->credits = sfText_create();
  sfText_setString(ms->playbutton, "PLAY");
  sfText_setString(ms->settings, "SETTINGS");
  sfText_setString(ms->credits, "EXIT");
  sfText_setFont(ms->playbutton, font);
  sfText_setFont(ms->settings, font);
  sfText_setFont(ms->credits, font);
  sfText_setCharacterSize(ms->playbutton, 100);
  sfText_setCharacterSize(ms->settings, 100);
  sfText_setCharacterSize(ms->credits, 100);
  sfText_setPosition(ms->playbutton, ms->posplay);
  sfText_setPosition(ms->settings, ms->possett);
  sfText_setPosition(ms->credits, ms->poscred);
  return (0);
}

int     draw_menu(t_mapsize *ms)
{
  sfColor       color;

  color.r = 15;
  color.g = 157;
  color.b = 232;
  color.a = 255;
  set_menu(ms);
  sfText_setColor(ms->playbutton, color);
  sfText_setColor(ms->settings, color);
  sfText_setColor(ms->credits, color);
  update_menu(ms);
  return (0);
}

int     create_menu(t_mapsize *ms)
{
  ms->tmenu = sfTexture_createFromFile("addon/menutitre.jpeg", NULL);
  ms->smenu = sfSprite_create();
  sfSprite_setTexture(ms->smenu, ms->tmenu, sfTrue);
  sfRenderWindow_drawSprite(ms->window, ms->smenu, NULL);
  sfRenderWindow_display(ms->window);
  draw_menu(ms);
  return (0);
}
