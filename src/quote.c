/*
** quote.c for quote.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat Apr 29 20:33:10 2017 Hugo WALTER
** Last update Sun May 28 22:06:14 2017 Hugo WALTER
*/

#include "my.h"

int     update_quote(t_mapsize *ms, sfRenderWindow *window,
		     sprites sprite)
{
  sfRenderWindow_clear(window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(window, sprite.carte_bar, NULL);
  sfRenderWindow_drawText(window, ms->qb->quote, NULL);
  sfRenderWindow_drawText(window, ms->qb->quote1, NULL);
  sfRenderWindow_drawText(window, ms->qb->quote2, NULL);
  sfRenderWindow_drawText(window, ms->qb->quote3, NULL);
  sfRenderWindow_drawText(window, ms->qb->quote4, NULL);
  sfRenderWindow_drawText(window, ms->qb->quotename, NULL);
  sfRenderWindow_drawText(window, ms->qb->quote5, NULL);
  sfRenderWindow_display(window);
  return (0);
}

int     set_quote_pos(t_mapsize *ms)
{
  ms->qb->posqte.x = 570;
  ms->qb->posqte.y = 150;
  ms->qb->posqte1.x = 600;
  ms->qb->posqte1.y = 350;
  ms->qb->posqte2.x = 600;
  ms->qb->posqte2.y = 450;
  ms->qb->posqte3.x = 600;
  ms->qb->posqte3.y = 550;
  ms->qb->posqte4.x = 600;
  ms->qb->posqte4.y = 650;
  ms->qb->posqtename.x = 1100;
  ms->qb->posqtename.y = 740;
  ms->qb->posqte5.x = 500;
  ms->qb->posqte5.y = 900;
  return (0);
}

int     set_msg_quote(t_mapsize *ms)
{
  ms->qb->quote = sfText_create();
  ms->qb->quote1 = sfText_create();
  ms->qb->quote2 = sfText_create();
  ms->qb->quote3 = sfText_create();
  ms->qb->quote4 = sfText_create();
  ms->qb->quotename = sfText_create();
  ms->qb->quote5 = sfText_create();
  sfText_setString(ms->qb->quote, "éééééé");
  sfText_setString(ms->qb->quote1, "Prends ton destin en main matelot !");
  sfText_setString(ms->qb->quote2, "Le port sera ton point de depart...");
  sfText_setString(ms->qb->quote3, "... l'horizon ton futur avenir");
  sfText_setString(ms->qb->quote4, "et l'ivresse ta bete noire.");
  sfText_setString(ms->qb->quotename, "E. J.");
  sfText_setString(ms->qb->quote5, "ééééééé");
  return (0);
}

int     set_quote_size(t_mapsize *ms)
{
  sfText_setCharacterSize(ms->qb->quote, 75);
  sfText_setCharacterSize(ms->qb->quote1, 50);
  sfText_setCharacterSize(ms->qb->quote2, 50);
  sfText_setCharacterSize(ms->qb->quote3, 50);
  sfText_setCharacterSize(ms->qb->quote4, 50);
  sfText_setCharacterSize(ms->qb->quotename, 50);
  sfText_setCharacterSize(ms->qb->quote5, 75);
  sfText_setPosition(ms->qb->quote, ms->qb->posqte);
  sfText_setPosition(ms->qb->quote1, ms->qb->posqte1);
  sfText_setPosition(ms->qb->quote2, ms->qb->posqte2);
  sfText_setPosition(ms->qb->quote3, ms->qb->posqte3);
  sfText_setPosition(ms->qb->quote4, ms->qb->posqte4);
  sfText_setPosition(ms->qb->quotename, ms->qb->posqtename);
  sfText_setPosition(ms->qb->quote5, ms->qb->posqte5);
  return (0);
}

int     set_quote(t_mapsize *ms)
{
  static int test;
  sfFont        *font;

  if (test == 0)
    {
      set_quote_pos(ms);
      font = sfFont_createFromFile("font/quote.ttf");
      set_msg_quote(ms);
      sfText_setFont(ms->qb->quote, font);
      sfText_setFont(ms->qb->quote1, font);
      sfText_setFont(ms->qb->quote2, font);
      sfText_setFont(ms->qb->quote3, font);
      sfText_setFont(ms->qb->quote4, font);
      sfText_setFont(ms->qb->quotename, font);
      sfText_setFont(ms->qb->quote5, font);
      set_quote_size(ms);
      test = 1;
    }
  return (0);
}
