/*
** initialisation.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Tue May  2 16:22:20 2017 clem
** Last update Sun May 28 16:38:06 2017 Hugo WALTER
*/

#include "my.h"

sfRenderWindow          *create_window(char *name, int width, int height)
{
  sfRenderWindow        *window;
  sfVideoMode           mode;

  mode.width = width;
  mode.height = height;
  mode.bitsPerPixel = 32;
  window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
  if (window == NULL)
    return (NULL);
  return (window);
}

t_my_framebuffer	*my_create_pixel_buffer(int width, int height)
{
  int			i;
  t_my_framebuffer	*buffer;

  buffer = malloc(sizeof(int) * 10);
  buffer->width = width;
  buffer->height = height;
  buffer->pixels = malloc(width * height * 4 * sizeof(sfUint8));
  if (buffer->pixels == NULL)
    return (NULL);
  i = 0;
  while (i++ < buffer->width * buffer->height * 4)
    buffer->pixels[i] = 0;
  return (buffer);
}

t_mapsize	*init_struct(t_mapsize *ms, char **tab)
{
  if (tab == NULL)
    return (NULL);
  if ((ms = malloc(sizeof(t_mapsize))) == NULL)
    return (NULL);
  if ((ms->play = malloc(sizeof(t_play))) == NULL)
    return (NULL);
  if ((ms->qb = malloc(sizeof(t_quotebar))) == NULL)
    return (NULL);
  if ((ms->st = malloc(sizeof(t_settings))) == NULL)
    return (NULL);
  if ((ms->cd = malloc(sizeof(t_credits))) == NULL)
    return (NULL);
  if ((ms->port = malloc(sizeof(t_port))) == NULL)
    return (NULL);
  if ((ms->music = malloc(sizeof(t_music))) == NULL)
    return (NULL);
  if ((ms->hb = malloc(sizeof(t_hitbox_nodes))) == NULL)
    return (NULL);
  if (set_ini(tab, ms) == NULL)
    return (NULL);
  if ((ms->sc1 = malloc(sizeof(t_scene1))) == NULL ||
      (ms->sc2 = malloc(sizeof(t_scene2))) == NULL ||
      (ms->send = malloc(sizeof(t_scenend))) == NULL)
    return (NULL);
  return (set_ms(ms));
}

int	init_ptr(void (*ptr[8])())
{
  ptr[0] = &bar;
  ptr[1] = &carte_bar;
  ptr[2] = &potion_bar;
  ptr[3] = &vue_bar;
  ptr[4] = &port_carte;
  ptr[5] = &finaltxt;
  ptr[6] = &select_credits;
  ptr[7] = NULL;
}

int	initialisation(t_mapsize *ms, void (*ptr[8])())
{
  init_ptr(ptr);
  ms->window = create_window("Tek The Sea", SCREEN_WIDTH, SCREEN_HEIGHT);
  ms->texture = sfTexture_create(SCREEN_WIDTH, SCREEN_HEIGHT);
  ms->sprite = sfSprite_create();
  sfSprite_setTexture(ms->sprite, ms->texture, sfTrue);
  ms->structure = my_create_pixel_buffer(SCREEN_WIDTH, SCREEN_HEIGHT);
  return (0);
}
