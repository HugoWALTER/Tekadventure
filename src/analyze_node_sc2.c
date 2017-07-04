/*
** analyze_node_sc2.c for analyze_node_sc2 in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Sat May 27 20:33:36 2017 Hugo WALTER
** Last update Sun May 28 16:18:23 2017 Hugo WALTER
*/

#include "my.h"

int	disp_txt_objs2(t_mapsize *ms, char **tab)
{
  if (check_hitbox_obj(ms, ms->sc2->mp, tab) == 1 && ms->sc2->obj == 0)
    {
      ms->sc2->obj = 1;
      draw_take(ms);
    }
  if (check_hitbox_obj(ms, ms->sc2->mp, tab) == 0 && ms->sc2->obj == 1)
    {
      while (ms->sc2->color.a != 0)
	{
	  sfText_setColor(ms->sc2->txttake, ms->sc2->color);
	  ms->sc2->color.a -= 0.1;
	  update_take(ms);
	}
      free_take(ms);
      ms->sc2->obj = 0;
    }
  return (0);
}

int	go_to_objs2(t_mapsize *ms, char **tab)
{
  ms->sc2->scl.x = 0.3;
  ms->sc2->scl.y = 0.3;
  ms->sc2->taillepers.x = 50;
  ms->sc2->taillepers.y = 100;
  ms->sc2->poswait.x = 50;
  ms->sc2->poswait.y = 100;
  ms->sc2->stocklp.x = ms->sc2->lastpos.x;
  ms->sc2->stocklp.y = ms->sc2->lastpos.y;
  while (ms->sc2->stocklp.y > 680)
    {
      plaquette_hauts2(ms, ms->sc2->stocklp);
      update_hauts2(ms);
      ms->sc2->stocklp.y--;
    }
  while (ms->sc2->stocklp.x < 1130)
    {
      plaquette_droites2(ms, ms->sc2->stocklp);
      update_droites2(ms);
      ms->sc2->stocklp.x++;
    }
  still_waiting_faces2(ms, ms->sc2->mp);
  update_waits2(ms);
  return (0);
}

int	mouvement_hb_or_objs2(t_mapsize *ms, char **tab)
{
  directions2(ms);
  check_hitboxs2(ms, tab);
  if (check_plan(ms, ms->sc2->mp, tab) != 0)
    move_sprite_same_hitboxs2(ms, tab);
  if (check_hitbox_obj(ms, ms->sc2->mp, tab) == 1)
    {
      ms->sc2->clickobj = 1;
      ms->sc2->scl.x = 0.3;
      ms->sc2->scl.y = 0.3;
      ms->sc2->taillepers.x = 50;
      ms->sc2->taillepers.y = 100;
      ms->sc2->poswait.x = 50;
      ms->sc2->poswait.y = 100;
      ms->sc2->lastpos.x = 1130;
      ms->sc2->lastpos.y = 680;
      move_sprite_same_hitboxs2(ms, tab);
      return (1);
    }
  return (0);
}

int     analyze_nodes2(t_mapsize *ms, char **tab)
{
  static int    onobj = 0;

  while (sfKeyboard_isKeyPressed(sfKeyEscape) != sfTrue)
    {
      ms->sc2->mp = sfMouse_getPosition((sfWindow *) ms->window);
      disp_txt_objs2(ms, tab);
      sinusoide_carte(ms, tab);
      if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
	  check_hitbox_obj(ms, ms->sc2->mp, tab) == 1 &&
	  ms->sc2->lastpos.x == 800 && ms->sc2->lastpos.y == 800 &&
	  onobj == 0)
	{
	  go_to_objs2(ms, tab);
	  break ;
	}
      if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
	  check_plan(ms, ms->sc2->mp, tab) != 0)
	{
	  onobj = 1;
	  if (mouvement_hb_or_objs2(ms, tab) == 1)
	    break ;
	}
    }
  return (0);
}

int     create_wallpaper(t_mapsize *ms)
{
  ms->sc1->tbar = sfTexture_createFromFile("addon/vue_bar.png", NULL);
  ms->sc1->sbar = sfSprite_create();
  sfSprite_setTexture(ms->sc1->sbar, ms->sc1->tbar, sfTrue);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  return (0);
}
