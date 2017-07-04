/*
** my_ptr2.c for  in /home/clem/Tek1/CSFML/tekadventure
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Fri May  5 15:37:52 2017 clem
** Last update Sun May 28 16:44:13 2017 Hugo WALTER
*/

#include "my.h"

void	port_carte_zoom(t_my_framebuffer *buffer, sfRenderWindow *window,
				   sprites sprite, t_mapsize *ms)
{
  sfRenderWindow_drawSprite(window, sprite.port_carte_zoom, NULL);
}

void	port_sans(t_my_framebuffer *buffer, sfRenderWindow *window,
				   sprites sprite, t_mapsize *ms)
{
  sfRenderWindow_drawSprite(window, sprite.port_sans, NULL);
}

void	select_credits(t_my_framebuffer *buffer, sfRenderWindow *window,
		       sprites sprite, t_mapsize *ms)
{
  scrolling_credits(ms, sprite);
  sfMusic_destroy(ms->play->trame);
}
