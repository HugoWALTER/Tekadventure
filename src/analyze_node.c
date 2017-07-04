/*
** analyze_node.c for analyze_node in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:58:15 2017 Hugo WALTER
** Last update Sun May 28 16:16:24 2017 Hugo WALTER
*/

#include "my.h"

int	disp_txt_obj(t_mapsize *ms, char **tab)
{
  if (check_hitbox_obj(ms, ms->sc1->mp, tab) == 1 && ms->sc1->obj == 0)
    {
      ms->sc1->obj = 1;
      draw_leave(ms);
    }
  if (check_hitbox_obj(ms, ms->sc1->mp, tab) == 0 && ms->sc1->obj == 1)
    {
      while (ms->sc1->color.a != 0)
	{
	  sfText_setColor(ms->sc1->txtleave, ms->sc1->color);
	  ms->sc1->color.a -= 0.1;
	  update_leave(ms);
	}
      free_leave(ms);
      ms->sc1->obj = 0;
    }
  return (0);
}

int	go_to_obj(t_mapsize *ms, char **tab)
{
  ms->sc1->scale.x = 0.5;
  ms->sc1->scale.y = 0.5;
  ms->sc1->taillepers.x = 75;
  ms->sc1->taillepers.y = 200;
  ms->sc1->poswait.x = 75;
  ms->sc1->poswait.y = 190;
  ms->sc1->stocklp.x = ms->sc1->lastpos.x;
  ms->sc1->stocklp.y = ms->sc1->lastpos.y;
  while (ms->sc1->stocklp.y > 722)
    {
      plaquette_haut(ms, ms->sc1->stocklp);
      update_haut(ms);
      ms->sc1->stocklp.y--;
    }
  while (ms->sc1->stocklp.x > 437)
    {
      plaquette_gauche(ms, ms->sc1->stocklp);
      update_gauche(ms);
      ms->sc1->stocklp.x--;
    }
  still_waiting_face(ms, ms->sc1->mp);
  update_wait(ms);
  return (0);
}

int	mouvement_hb_or_obj(t_mapsize *ms, char **tab)
{
  direction(ms);
  check_hitbox(ms, tab);
  if (ms->sc1->nomvm == 0 && check_plan(ms, ms->sc1->mp, tab) != 0)
    move_sprite_same_hitbox(ms, tab);
  if (check_hitbox_obj(ms, ms->sc1->mp, tab) == 1)
    {
      ms->sc1->clickobj = 1;
      ms->sc1->scale.x = 0.5;
      ms->sc1->scale.y = 0.5;
      ms->sc1->taillepers.x = 75;
      ms->sc1->taillepers.y = 200;
      ms->sc1->poswait.x = 75;
      ms->sc1->poswait.y = 190;
      ms->sc1->lastpos.x = 437;
      ms->sc1->lastpos.y = 722;
      move_sprite_same_hitbox(ms, tab);
      return (1);
    }
  return (0);
}

int     analyze_node(t_mapsize *ms, char **tab)
{
  static int	fobj = 0;

  while (sfKeyboard_isKeyPressed(sfKeyEscape) != sfTrue)
    {
      ms->sc1->mp = sfMouse_getPosition((sfWindow *) ms->window);
      disp_txt_obj(ms, tab);
      if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
	  check_hitbox_obj(ms, ms->sc1->mp, tab) == 1 &&
	  ms->sc1->lastpos.x == 708 && ms->sc1->lastpos.y == 800 && fobj == 0)
	{
	  go_to_obj(ms, tab);
	  break ;
	}
      if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue &&
	  check_plan(ms, ms->sc1->mp, tab) != 0)
	{
	  fobj = 1;
	  if (mouvement_hb_or_obj(ms, tab) == 1)
	    break ;
	}
    }
  return (0);
}

int     update_bar(t_mapsize *ms)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  sfTexture_updateFromPixels(ms->texture, ms->structure->pixels,
			     ms->structure->width,
			     ms->structure->height, 0, 0);
  sfRenderWindow_drawSprite(ms->window, ms->sc1->sbar, NULL);
  sfRenderWindow_display(ms->window);
  return (0);
}
