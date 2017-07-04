/*
** finaltxt.c for finaltxt.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sun May 28 03:15:53 2017 Hugo WALTER
** Last update Sun May 28 16:36:04 2017 Hugo WALTER
*/

#include "my.h"

int     create_blackscreen(t_mapsize *ms)
{
  ms->send->txture = sfTexture_createFromFile("addon/black.jpg", NULL);
  ms->send->spt = sfSprite_create();
  sfSprite_setTexture(ms->send->spt, ms->send->txture, sfTrue);
  ms->send->black.r = 0;
  ms->send->black.g = 0;
  ms->send->black.b = 0;
  ms->send->black.a = 255;
  sfSprite_setColor(ms->send->spt, ms->send->black);
  sfRenderWindow_drawSprite(ms->window, ms->send->spt, NULL);
  while (ms->send->black.a != 0)
    {
      ms->send->black.a -= 0.1;
      sfSprite_setColor(ms->send->spt, ms->send->black);
      update_fondu(ms);
      if (ms->send->black.a < 0)
	break ;
    }
  return (0);
}

int     set_finaltxt(t_mapsize *ms)
{
  sfFont        *font;

  ms->send->postxtfinal.x = 380;
  ms->send->postxtfinal.y = 460;
  ms->send->txtfinal = sfText_create();
  sfText_setString(ms->send->txtfinal, "L'aventure peut alors commencer...");
  font = sfFont_createFromFile("font/ecriture.ttf");
  sfText_setFont(ms->send->txtfinal, font);
  sfText_setCharacterSize(ms->send->txtfinal, 70);
  sfText_setPosition(ms->send->txtfinal, ms->send->postxtfinal);
  return (0);
}

int     create_finaltxt(t_mapsize *ms)
{
  static int    i = 0;

  if (i == 0)
    {
      ms->send->txtcolor.r = 255;
      ms->send->txtcolor.g = 255;
      ms->send->txtcolor.b = 255;
      ms->send->txtcolor.a = 255;
      set_finaltxt(ms);
      sfText_setColor(ms->send->txtfinal, ms->send->txtcolor);
      i = 1;
    }
  update_finaltxt(ms);
  return (0);
}

void	finaltxt(t_my_framebuffer *buffer,
		 sfRenderWindow *window, sprites sprite, t_mapsize *ms)
{
  static int	i;
  sfClock	*clock;

  if (i == 0)
    {
      create_blackscreen(ms);
      clock = sfClock_create();
      while ((sfTime_asSeconds(sfClock_getElapsedTime(clock))) < 5)
	create_finaltxt(ms);
      sfClock_destroy(clock);
      while (ms->send->txtcolor.a != 0)
	{
	  ms->send->txtcolor.a -= 0.1;
	  sfText_setColor(ms->send->txtfinal, ms->send->txtcolor);
	  update_finaltxt(ms);
	  if (ms->send->txtcolor.a < 0)
	    break ;
	}
    }
  i++;
  ms->hb->j = 3;
}
