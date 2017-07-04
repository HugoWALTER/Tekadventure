/*
** create_sprites.c for  in /home/mary_f/Info/tekadventure/src
**
** Made by francois mary
** Login   <mary_f@epitech.net>
**
** Started on  Sat May 27 14:02:09 2017 francois mary
** Last update Sun May 28 16:34:53 2017 Hugo WALTER
*/

#include "my.h"

sprites		create_sprites3(sprites sprite, sfTexture *texture)
{
  texture = sfTexture_createFromFile("addon/port_carte_zoom.png", NULL);
  sfSprite_setTexture(sprite.port_carte_zoom, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/port_sans.png", NULL);
  sfSprite_setTexture(sprite.port_sans, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/potion_bar.png", NULL);
  sfSprite_setTexture(sprite.potion_bar, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/vue_bar.png", NULL);
  sfSprite_setTexture(sprite.vue_bar, texture, sfTrue);
  return (sprite);
}

sprites		create_sprites2(sprites sprite, sfTexture *texture)
{
  texture = sfTexture_createFromFile("addon/terre.jpg", NULL);
  sfSprite_setTexture(sprite.terre, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/sprite.png", NULL);
  sfSprite_setTexture(sprite.sprite_1, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/sprite_2.png", NULL);
  sfSprite_setTexture(sprite.sprite_2, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/sprite_3.png", NULL);
  sfSprite_setTexture(sprite.sprite_3, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/mountain.png", NULL);
  sfSprite_setTexture(sprite.mountain, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/nuages.png", NULL);
  sfSprite_setTexture(sprite.nuages, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/title.png", NULL);
  sfSprite_setTexture(sprite.title, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/bar.png", NULL);
  sfSprite_setTexture(sprite.bar, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/bateau.png", NULL);
  sfSprite_setTexture(sprite.bateau, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/map_vide.png", NULL);
  sfSprite_setTexture(sprite.carte_bar, texture, sfTrue);
  texture = sfTexture_createFromFile("addon/port_carte.png", NULL);
  sfSprite_setTexture(sprite.port_carte, texture, sfTrue);
  return (create_sprites3(sprite, texture));
}

sprites         create_sprites()
{
  sprites       sprite;
  sfTexture     *texture;

  sprite.bar = sfSprite_create();
  sprite.bateau = sfSprite_create();
  sprite.carte_bar = sfSprite_create();
  sprite.port_carte = sfSprite_create();
  sprite.port_carte_zoom = sfSprite_create();
  sprite.port_sans = sfSprite_create();
  sprite.potion_bar = sfSprite_create();
  sprite.vue_bar = sfSprite_create();
  sprite.starfield = sfSprite_create();
  sprite.title = sfSprite_create();
  sprite.terre = sfSprite_create();
  sprite.sprite_1 = sfSprite_create();
  sprite.sprite_2 = sfSprite_create();
  sprite.sprite_3 = sfSprite_create();
  sprite.mountain = sfSprite_create();
  sprite.nuages = sfSprite_create();
  return (create_sprites2(sprite, texture));
}

void	select_theme(t_mapsize *ms)
{
   update_left(ms);
   ms->st->mtheme = 1;
   ms->st->maintheme = ms->music->maintheme;
}

void	click_theme(t_mapsize *ms, sfVector2i mp)
{
  static int	testr;
  static int	dep;

  if (dep == 0)
    {
      validate_left(ms);
      ms->st->mtheme = 1;
      dep = 1;
    }
  if (mp.x > 312 && mp.x < 447 && mp.y > 703 &&
      mp.y < 843 && ms->st->mtheme == 2)
    select_theme(ms);
  if (mp.x > 887 && mp.x < 1100 && mp.y > 700 &&
      mp.y < 837 && ms->st->mtheme == 1)
    {
      ms->st->mtheme = 2;
      if (testr == 0)
	{
	  validate_right(ms);
	  testr = 1;
	}
      ms->st->maintheme = ms->music->piraterie;
    }
  update_nbvol(ms);
  free(ms->st->nbvol);
}
