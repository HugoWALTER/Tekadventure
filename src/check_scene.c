/*
** check_scene.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Fri May  5 15:31:55 2017 clem
** Last update Sun May 28 16:31:42 2017 Hugo WALTER
*/

#include "my.h"

int	create_scene1(t_mapsize *ms, sfClock *clock)
{
  ms->play->paper = sfMusic_createFromFile(ms->music->paper);
  sfMusic_setVolume(ms->play->paper, ms->st->vol);
  sfMusic_play(ms->play->paper);
  clock = sfClock_create();
  while ((sfTime_asSeconds(sfClock_getElapsedTime(clock))) < 5);
  sfClock_destroy(clock);
  sfMusic_destroy(ms->play->paper);
}

int	check_pos(int scene, t_mapsize *ms)
{
  static int		i;
  sfVector2i		pos;
  sfClock		*clock;

  if (ms->hb->j == 1)
    return (4);
  if (ms->hb->j == 2)
    return (5);
  pos = sfMouse_getPosition((sfWindow *) ms->window);
  if (scene == 1)
    {
      create_scene1(ms, clock);
      scene = 3;
    }
  if (scene == 0 && pos.x > 431 && pos.x < 681 && pos.y > 531 && pos.y < 693)
    scene = 1;
  if (scene == 0 && i <= 2 && pos.x > 1269 && pos.x < 1364 &&
      pos.y > 555 && pos.y < 663)
    {
      i += 1;
      scene = 2;
    }
  return (scene);
}

int	check_scene(int scene, t_mapsize *ms)
{
  sfClock	*clock;

  if (scene == 2)
    {
      ms->play->drink = sfMusic_createFromFile(ms->music->drink);
      sfMusic_setVolume(ms->play->drink, ms->st->vol);
      sfMusic_play(ms->play->drink);
      clock = sfClock_create();
      while ((sfTime_asSeconds(sfClock_getElapsedTime(clock))) < 1);
      sfClock_destroy(clock);
      sfMusic_destroy(ms->play->drink);
      return (0);
    }
  return (scene);
}
