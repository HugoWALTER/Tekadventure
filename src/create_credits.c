/*
** create_credits.c for create_credits in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May  6 17:46:09 2017 Hugo WALTER
** Last update Mon May 29 18:03:35 2017 Hugo WALTER
*/

#include "my.h"

int     update_credits(t_mapsize *ms)
{
  sfRenderWindow_drawText(ms->window, ms->cd->created, NULL);
  sfRenderWindow_drawText(ms->window, ms->cd->soundsgn, NULL);
  sfRenderWindow_drawText(ms->window, ms->cd->hugo, NULL);
  sfRenderWindow_drawText(ms->window, ms->cd->projectld, NULL);
  sfRenderWindow_drawText(ms->window, ms->cd->clement, NULL);
  sfRenderWindow_drawText(ms->window, ms->cd->graphiste, NULL);
  sfRenderWindow_drawText(ms->window, ms->cd->francois, NULL);
  sfRenderWindow_drawText(ms->window, ms->cd->thx, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}

int     set_cd_position(t_mapsize *ms)
{
  ms->cd->poscreated.x = 620;
  ms->cd->poscreated.y = 1110;
  ms->cd->possddsgn.x = 200;
  ms->cd->possddsgn.y = 1120;
  ms->cd->poshugo.x = 990;
  ms->cd->poshugo.y = 1110;
  ms->cd->posproject.x = 200;
  ms->cd->posproject.y = 1120;
  ms->cd->posclement.x = 990;
  ms->cd->posclement.y = 1110;
  ms->cd->posgraphiste.x = 200;
  ms->cd->posgraphiste.y = 1120;
  ms->cd->posfrancois.x = 990;
  ms->cd->posfrancois.y = 1110;
  ms->cd->posthx.x = 690;
  ms->cd->posthx.y = 1120;
  return (0);
}

int     set_cd_string(t_mapsize *ms)
{
  ms->cd->created = sfText_create();
  ms->cd->soundsgn = sfText_create();
  ms->cd->hugo = sfText_create();
  ms->cd->projectld = sfText_create();
  ms->cd->clement = sfText_create();
  ms->cd->graphiste = sfText_create();
  ms->cd->francois = sfText_create();
  ms->cd->thx = sfText_create();
  sfText_setString(ms->cd->created, "CREATED BY:");
  sfText_setString(ms->cd->soundsgn, "Sound Designer / Developper:");
  sfText_setString(ms->cd->hugo, "Hugo Walter");
  sfText_setString(ms->cd->projectld, "Project leader / Developper:");
  sfText_setString(ms->cd->clement, "Clement Da-Purificacao");
  sfText_setString(ms->cd->graphiste, "Designer / Developper:");
  sfText_setString(ms->cd->francois, "Francois Mary");
  sfText_setString(ms->cd->thx, "Thank you !");
  return (0);
}

int     set_cd_size(t_mapsize *ms)
{
  sfText_setCharacterSize(ms->cd->created, 100);
  sfText_setCharacterSize(ms->cd->soundsgn, 50);
  sfText_setCharacterSize(ms->cd->hugo, 70);
  sfText_setCharacterSize(ms->cd->projectld, 50);
  sfText_setCharacterSize(ms->cd->clement, 70);
  sfText_setCharacterSize(ms->cd->graphiste, 50);
  sfText_setCharacterSize(ms->cd->francois, 70);
  sfText_setCharacterSize(ms->cd->thx, 70);
  sfText_setPosition(ms->cd->created, ms->cd->poscreated);
  sfText_setPosition(ms->cd->soundsgn, ms->cd->possddsgn);
  sfText_setPosition(ms->cd->hugo, ms->cd->poshugo);
  sfText_setPosition(ms->cd->projectld, ms->cd->posproject);
  sfText_setPosition(ms->cd->clement, ms->cd->posclement);
  sfText_setPosition(ms->cd->graphiste, ms->cd->posgraphiste);
  sfText_setPosition(ms->cd->francois, ms->cd->posfrancois);
  sfText_setPosition(ms->cd->thx, ms->cd->posthx);
  return (0);
}
