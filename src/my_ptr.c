/*
** my_ptr.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Tue May  2 16:05:08 2017 clem
** Last update Sun May 28 16:44:55 2017 Hugo WALTER
*/

#include "my.h"

void	bar(t_my_framebuffer *buffer, sfRenderWindow *window,
			    sprites sprite, t_mapsize *ms)
{
  sfRenderWindow_drawSprite(window, sprite.bar, NULL);
}

void	carte_bar(t_my_framebuffer *buffer, sfRenderWindow *window,
				  sprites sprite, t_mapsize *ms)
{
  sfRenderWindow_drawSprite(window, sprite.carte_bar, NULL);
  draw_quote(ms, window, sprite);
  update_quote(ms, window, sprite);
}

void	potion_bar(t_my_framebuffer *buffer, sfRenderWindow *window,
				   sprites sprite, t_mapsize *ms)
{
  sfRenderWindow_drawSprite(window, sprite.potion_bar, NULL);
}

void	vue_bar(t_my_framebuffer *buffer, sfRenderWindow *window,
				   sprites sprite, t_mapsize *ms)
{
  static int	i;

  if (i == 0)
    {
      create_wallpaper(ms);
      init_pos_player(ms);
      analyze_node(ms, ms->hb->sc1);
    }
  i++;
  ms->hb->j = 1;
}

void	port_carte(t_my_framebuffer *buffer, sfRenderWindow *window,
			   sprites sprite, t_mapsize *ms)
{
  static int	i;

  if (i == 0)
    {
      init_scene2(ms);
      scrolling_port(ms);
      while (ms->sc2->cfige.a != 0)
	{
	  sfText_setColor(ms->sc2->txtfige, ms->sc2->cfige);
	  ms->sc2->cfige.a -= 0.1;
	  update_port(ms);
	}
      free_fige(ms);
      create_port(ms);
      init_pos_players2(ms);
      analyze_nodes2(ms, ms->hb->sc2);
    }
  i++;
  ms->hb->j = 2;
}
