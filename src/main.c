/*
** main.c for main.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  2 09:04:15 2017 Hugo WALTER
** Last update Sun May 28 16:39:25 2017 Hugo WALTER
*/

#include "my.h"

int	select_settings(t_mapsize *ms, sfVector2i mp)
{
  static int	initvol;
  int	elem = 2;

  ms->st->wasinset = 1;
  create_settings(ms);
  if (initvol == 0)
    {
      ms->st->voltxt = "50";
      draw_volume_text(ms);
      initvol = 1;
    }
  set_volume(ms, mp);
  draw_volume_text(ms);
  click_theme(ms, mp);
  if (ms->st->mtheme == 1)
    update_left(ms);
  if (ms->st->mtheme == 2)
    update_right(ms);
  if (click_valider(ms, mp) == 1)
    {
      update_menu(ms);
      elem = 0;
    }
  return (elem);
}

int	wait_selecting(t_mapsize *ms, sprites sprite)
{
  static int	elem = 0;
  static int	initvol = 0;
  sfVector2i	mp;

  while (elem == 0 || elem == 2 || elem == 3 ||
	 sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
    {
      if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
	return (my_destroy_menu(0, ms));
      if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
	{
	  mp = sfMouse_getPosition((sfWindow *) ms->window);
	  if (mp.x > 851 && mp.x < 1082 && mp.y > 273 && mp.y < 375 &&
	      elem == 0)
	    elem = select_play(ms);
	  if (mp.x > 755 && mp.x < 1262 && mp.y > 521 && mp.y < 627
	      && elem == 0 || elem == 2)
	    elem = select_settings(ms, mp);
	  if  (mp.x > 851 && mp.x < 1082 && mp.y > 750 && mp.y < 853 &&
	       elem == 0)
	    return (my_destroy_menu(1, ms));
	}
    }
  return (0);
}

int	menu(t_mapsize *ms, sprites sprite)
{
  static int	men;

  if (men == 0)
    {
      update_texture(ms);
      ms->menu = sfMusic_createFromFile(ms->music->menu);
      sfMusic_setVolume(ms->menu, 50.0);
      sfMusic_play(ms->menu);
      sfMusic_setLoop(ms->menu, sfTrue);
      create_menu(ms);
      if (wait_selecting(ms, sprite) == 1)
	return (1);
      men = 1;
    }
  return (0);
}

int	init_scene2(t_mapsize *ms)
{
  ms->sc2->left = 0;
  ms->sc2->right = 0;
  ms->sc2->stock.x = 800;
  ms->sc2->stock.y = 800;
  ms->sc2->mvm = 0;
  ms->sc2->nomvm = 0;
  ms->sc2->obj = 0;
  ms->sc2->clickobj = 0;
  return (0);
}

int	main(int ac, char **av)
{
  static int		scene;
  sprites	        sprite;
  sfTexture		*texture;
  t_my_framebuffer	*buffer;
  void			(*ptr[8])();
  t_mapsize		*ms;

  if ((ms = init_struct(ms, tab_char(my_read(av)))) == NULL)
    return (my_error_ini());
  initialisation(ms, ptr);
  sprite = create_sprites();
  buffer = my_create_pixel_buffer(1920, 1080);
  while (sfKeyboard_isKeyPressed(sfKeyEscape) != sfTrue)
    {
      if (menu(ms, sprite) == 1)
	break ;
      if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
	scene = check_pos(scene, ms);
      if (ms->hb->j == 3)
	return (my_ptr_6(ptr, buffer, ms, sprite));
      ptr[scene](buffer, ms->window, sprite, ms);
      sfRenderWindow_display(ms->window);
      scene = check_scene(scene, ms);
    }
  return (destroy(ms));
}
