/*
** draw_text.c for draw_text in /home/walter_h/Infographie/tekadv
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Wed Apr 26 12:23:44 2017 Hugo WALTER
** Last update Sun May 28 16:35:27 2017 Hugo WALTER
*/

#include "my.h"

int     draw_taverne(t_mapsize *ms)
{
  static sfColor	color = {255, 255, 255, 255};
  sfSoundStatus		status;
  sfClock		*clock;

  set_taverne(ms);
  sfText_setColor(ms->play->tanight, color);
  sfText_setColor(ms->play->village, color);
  sfText_setColor(ms->play->quete, color);
  sfText_setColor(ms->play->deboire, color);
  update_taverne(ms);
  clock = sfClock_create();
  while ((sfTime_asSeconds(sfClock_getElapsedTime(clock))) < 7);
  sfClock_destroy(clock);
  while (sfMusic_getStatus(ms->play->taverne) != sfStopped);
  while (color.a != 0)
    {
      sfText_setColor(ms->play->tanight, color);
      sfText_setColor(ms->play->village, color);
      sfText_setColor(ms->play->quete, color);
      sfText_setColor(ms->play->deboire, color);
      update_taverne(ms);
      color.a -= 0.1;
    }
  return (0);
}

int     draw_night(t_mapsize *ms)
{
  static sfColor	color = {255, 255, 255, 255};
  sfSoundStatus		status;
  sfClock		*clock;

  set_night(ms);
  sfText_setColor(ms->play->night, color);
  sfText_setColor(ms->play->matelot, color);
  sfText_setColor(ms->play->meurtre, color);
  update_night(ms);
  clock = sfClock_create();
  while ((sfTime_asSeconds(sfClock_getElapsedTime(clock))) < 7);
  sfClock_destroy(clock);
  while (sfMusic_getStatus(ms->play->foret) != sfStopped);
  while (color.a != 0)
    {
      sfText_setColor(ms->play->night, color);
      sfText_setColor(ms->play->matelot, color);
      sfText_setColor(ms->play->meurtre, color);
      update_night(ms);
      color.a -= 0.1;
    }
  return (0);
}

int     draw_name(t_mapsize *ms)
{
  sfColor       color;
  sfClock	*clock;

  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
  set_name(ms);
  sfText_setColor(ms->play->nameport, color);
  sfText_setColor(ms->play->moyenage, color);
  update_name(ms);
  clock = sfClock_create();
  while ((sfTime_asSeconds(sfClock_getElapsedTime(clock))) < 5);
  sfClock_destroy(clock);
  while (color.a != 0)
    {
      sfText_setColor(ms->play->nameport, color);
      sfText_setColor(ms->play->moyenage, color);
      update_name(ms);
      color.a -= 0.1;
    }
}

int     draw_quote(t_mapsize *ms, sfRenderWindow *window, sprites sprite)
{
  sfColor	color;

  color.r = 0;
  color.g = 0;
  color.b = 0;
  color.a = 255;
  set_quote(ms);
  sfText_setColor(ms->qb->quote, color);
  sfText_setColor(ms->qb->quote1, color);
  sfText_setColor(ms->qb->quote2, color);
  sfText_setColor(ms->qb->quote3, color);
  sfText_setColor(ms->qb->quote4, color);
  sfText_setColor(ms->qb->quotename, color);
  sfText_setColor(ms->qb->quote5, color);
  update_quote(ms, window, sprite);
  return (0);
}
