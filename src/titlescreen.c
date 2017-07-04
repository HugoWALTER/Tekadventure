/*
** titlescreen.c for titlescreen in /home/walter_h/Infographie/tekadv
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Wed Apr 26 15:19:17 2017 Hugo WALTER
** Last update Sun May 28 16:52:04 2017 Hugo WALTER
*/

#include "my.h"

int	create_texture(t_mapsize *ms)
{
  sfVector2f	scale;

  scale.x = 3;
  scale.y = 3;
  ms->texture = sfTexture_createFromFile("addon/cieletoile.png", NULL);
  ms->sprite = sfSprite_create();
  sfSprite_setTexture(ms->sprite, ms->texture, sfTrue);
  sfSprite_setScale(ms->sprite, scale);
  sfRenderWindow_drawSprite(ms->window, ms->sprite, NULL);
  return (0);
}

int     titlescreen(t_mapsize *ms)
{
  create_texture(ms);
  update_texture(ms);
  ms->play->foret = sfMusic_createFromFile(ms->music->foret);
  sfMusic_setVolume(ms->play->foret, ms->st->vol);
  sfMusic_play(ms->play->foret);
  draw_name(ms);
  update_name(ms);
  draw_night(ms);
  update_night(ms);
  sfMusic_destroy(ms->play->foret);
  ms->play->taverne = sfMusic_createFromFile(ms->music->taverne);
  sfMusic_setVolume(ms->play->taverne, ms->st->vol);
  sfMusic_play(ms->play->taverne);
  draw_taverne(ms);
  update_taverne(ms);
  sfMusic_destroy(ms->play->taverne);
  ms->play->trame = sfMusic_createFromFile(ms->st->maintheme);
  sfMusic_setVolume(ms->play->trame, ms->st->vol);
  sfMusic_play(ms->play->trame);
  sfMusic_setLoop(ms->play->trame, sfTrue);
  return (0);
}
