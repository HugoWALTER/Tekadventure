/*
** launch_credits.c for launch_credits in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May  6 17:42:35 2017 Hugo WALTER
** Last update Sun May 28 16:38:38 2017 Hugo WALTER
*/

#include "my.h"

int	 set_text(t_mapsize *ms)
{
  sfFont        *font;

  set_cd_position(ms);
  font = sfFont_createFromFile("font/ecriture.ttf");
  set_cd_string(ms);
  sfText_setFont(ms->cd->created, font);
  sfText_setFont(ms->cd->soundsgn, font);
  sfText_setFont(ms->cd->hugo, font);
  sfText_setFont(ms->cd->projectld, font);
  sfText_setFont(ms->cd->clement, font);
  sfText_setFont(ms->cd->graphiste, font);
  sfText_setFont(ms->cd->francois, font);
  sfText_setFont(ms->cd->thx, font);
  set_cd_size(ms);
  return (0);
}

int	create_text(t_mapsize *ms)
{
  sfColor       color;

  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
  set_text(ms);
  sfText_setColor(ms->cd->created, color);
  sfText_setColor(ms->cd->soundsgn, color);
  sfText_setColor(ms->cd->hugo, color);
  sfText_setColor(ms->cd->projectld, color);
  sfText_setColor(ms->cd->clement, color);
  sfText_setColor(ms->cd->graphiste, color);
  sfText_setColor(ms->cd->francois, color);
  sfText_setColor(ms->cd->thx, color);
  update_credits(ms);
  return (0);
}

void	draw_cloud_heart(sprites sprite, sfRenderWindow *window,
			 sfVector2f pos2, sfVector2f pos)
{
  sfSprite_setPosition(sprite.nuages, pos2);
  sfRenderWindow_drawSprite(window, sprite.nuages, NULL);
  sfSprite_setPosition(sprite.terre, pos);
  sfRenderWindow_drawSprite(window, sprite.terre, NULL);
}

void	draw_ground_mountain(sprites sprite, sfRenderWindow *window,
			     sfVector2f posa, sfVector2f pos1)
{
  sfSprite_setPosition(sprite.terre, posa);
  sfRenderWindow_drawSprite(window, sprite.terre, NULL);
  sfSprite_setPosition(sprite.mountain, pos1);
  sfRenderWindow_drawSprite(window, sprite.mountain, NULL);
}

void	parralax(sfRenderWindow *window, sprites sprite)
{
  static sfVector2f     pos = {0, 750};
  static sfVector2f     posa = {1920, 750};
  static sfVector2f     pos1 = {0, 150};
  static sfVector2f     pos1_1 = {-1731, 150};
  static sfVector2f     pos2 = {-1250, 150};
  static sfVector2f     pos3 = {1920, 400};

  pos.x -= 0.1;
  (pos.x < -400) ? pos.x = 1920 : 0;
  posa.x -= 0.1;
  (posa.x < -200) ? posa.x = 1920 : 0;
  pos1_1.x += 0.2;
  (pos1_1.x > 1920) ? pos1_1.x = -1920 : 0;
  pos1.x += 0.2;
  (pos1.x > 1920) ? pos1.x = -1920 : 0;
  pos2.x += 0.7;
  (pos2.x > 1700) ? pos2.x = -1400 : 0;
  pos3.x -= 0.5;
  (pos3.x < -1250) ? pos3.x = 1920 : 0;
  draw_cloud_heart(sprite, window, pos2, pos);
  draw_ground_mountain(sprite, window, posa, pos1);
  sfSprite_setPosition(sprite.mountain, pos1_1);
  sfRenderWindow_drawSprite(window, sprite.mountain, NULL);
  sfSprite_setPosition(sprite.nuages, pos3);
  sfRenderWindow_drawSprite(window, sprite.nuages, NULL);
}
