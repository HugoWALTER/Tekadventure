/*
** scroll_credits2.c for  in /home/mary_f/Info/tekadventure/src
**
** Made by francois mary
** Login   <mary_f@epitech.net>
**
** Started on  Sun May 28 00:48:59 2017 francois mary
** Last update Sun May 28 16:47:04 2017 Hugo WALTER
*/

#include "my.h"

int     scroll_txt(t_mapsize *ms, sprites sprite)
{
  static sfColor        color = {49, 140, 231, 255};
  static int            dec;

  while (ms->cd->posthx.y > -100)
    {
      dec = scroll_create(ms);
      dec = scroll_hugo(ms, dec);
      dec = scroll_clement(ms, dec);
      dec = scroll_francois(ms, dec);
      scroll_fin(ms, dec);
      sfRenderWindow_clear(ms->window, color);
      parralax(ms->window, sprite);
      my_sprite(ms->window);
      my_sprite2(ms->window);
      my_sprite3(ms->window);
      update_credits(ms);
    }
  return (0);
}

int     scrolling_credits(t_mapsize *ms, sprites sprite)
{
  sfRenderWindow_clear(ms->window, sfBlack);
  create_text(ms);
  scroll_txt(ms, sprite);
  destroy_credits(ms);
  return (0);
}
