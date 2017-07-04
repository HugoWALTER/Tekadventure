/*
** set_text.c for set_text in /home/walter_h/Infographie/tekadv
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Wed Apr 26 15:11:08 2017 Hugo WALTER
** Last update Sun May 28 16:48:50 2017 Hugo WALTER
*/

#include "my.h"

int     set_name(t_mapsize *ms)
{
  sfFont        *font;

  ms->play->posn.x = 250;
  ms->play->posn.y = 350;
  ms->play->posma.x = 600;
  ms->play->posma.y = 550;
  font = sfFont_createFromFile("font/ecriture.ttf");
  ms->play->nameport = sfText_create();
  ms->play->moyenage = sfText_create();
  sfText_setString(ms->play->nameport, "Village Portuaire, Saint Kapur");
  sfText_setString(ms->play->moyenage, "Moyen-Age, XIVe 1346 AP-JC");
  sfText_setFont(ms->play->nameport, font);
  sfText_setFont(ms->play->moyenage, font);
  sfText_setCharacterSize(ms->play->nameport, 100);
  sfText_setCharacterSize(ms->play->moyenage, 60);
  sfText_setPosition(ms->play->nameport, ms->play->posn);
  sfText_setPosition(ms->play->moyenage, ms->play->posma);
  return (0);
}

int     set_night_text(t_mapsize *ms)
{
  sfFont        *font;

  font = sfFont_createFromFile("font/ecriture.ttf");
  sfText_setFont(ms->play->night, font);
  sfText_setFont(ms->play->matelot, font);
  sfText_setFont(ms->play->meurtre, font);
  sfText_setCharacterSize(ms->play->night, 64);
  sfText_setCharacterSize(ms->play->matelot, 64);
  sfText_setCharacterSize(ms->play->meurtre, 64);
  sfText_setPosition(ms->play->night, ms->play->posni);
  sfText_setPosition(ms->play->matelot, ms->play->posmat);
  sfText_setPosition(ms->play->meurtre, ms->play->posme);
  return (0);
}

int     set_night(t_mapsize *ms)
{
  ms->play->posni.x = 200;
  ms->play->posni.y = 250;
  ms->play->posmat.x = 300;
  ms->play->posmat.y = 450;
  ms->play->posme.x = 100;
  ms->play->posme.y = 650;
  ms->play->night = sfText_create();
  ms->play->matelot = sfText_create();
  ms->play->meurtre = sfText_create();
  sfText_setString(ms->play->night, "Lors d'une lugubre nuit d'hiver, un \
jeune matelot");
  sfText_setString(ms->play->matelot, "dote d'une petite besace d'or \
quasiment vide");
  sfText_setString(ms->play->meurtre, "se trouva demuni apres l'annonce \
du meurtre de sa femme.");
  set_night_text(ms);
  return (0);
}

int     set_text_taverne(t_mapsize *ms)
{
  sfFont        *font;

  font = sfFont_createFromFile("font/ecriture.ttf");
  sfText_setFont(ms->play->tanight, font);
  sfText_setFont(ms->play->village, font);
  sfText_setFont(ms->play->quete, font);
  sfText_setFont(ms->play->deboire, font);
  sfText_setCharacterSize(ms->play->tanight, 64);
  sfText_setCharacterSize(ms->play->village, 64);
  sfText_setCharacterSize(ms->play->quete, 64);
  sfText_setCharacterSize(ms->play->deboire, 64);
  sfText_setPosition(ms->play->tanight, ms->play->post);
  sfText_setPosition(ms->play->village, ms->play->posmata);
  sfText_setPosition(ms->play->quete, ms->play->posmta);
  sfText_setPosition(ms->play->deboire, ms->play->posqta);
  return (0);
}

int     set_taverne(t_mapsize *ms)
{
  ms->play->post.x = 200;
  ms->play->post.y = 150;
  ms->play->posmata.x = 200;
  ms->play->posmata.y = 350;
  ms->play->posmta.x = 200;
  ms->play->posmta.y = 550;
  ms->play->posqta.x = 200;
  ms->play->posqta.y = 750;
  ms->play->tanight = sfText_create();
  ms->play->village = sfText_create();
  ms->play->quete = sfText_create();
  ms->play->deboire = sfText_create();
  sfText_setString(ms->play->tanight, "Durant cette longue nuit chaotique \
dans les pietres");
  sfText_setString(ms->play->village, "tavernes du village, te voila face \
a ton destin !");
  sfText_setString(ms->play->quete, "Qu'importe tes deboires maintenant,");
  sfText_setString(ms->play->deboire, "je te confie cette quete...");
  set_text_taverne(ms);
  return (0);
}
