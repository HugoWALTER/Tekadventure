/*
** anim.c for anim.c in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:46:27 2017 Hugo WALTER
** Last update Sun May 28 16:22:20 2017 Hugo WALTER
*/

#include "my.h"

void	my_sprite(sfRenderWindow *window)
{
  static sfIntRect	area = {0, 0, 100, 300};
  static sfVector2f	pos = {0, 700};
  static sfVector2f	scale = {1, 1};
  static int		frame = 0;
  sfSprite              *image;
  sfTexture             *texture;

  if (frame++ == 60)
    {
      area.left += 101;
      if (area.left > 300)
	area.left = 0;
      frame = 0;
    }
  pos.x++;
  image = sfSprite_create();
  texture = sfTexture_createFromFile("addon/sprite.png", &area);
  sfSprite_setTexture(image, texture, sfTrue);
  sfSprite_setPosition(image, pos);
  sfSprite_setScale(image, scale);
  sfRenderWindow_drawSprite(window, image, NULL);
  sfTexture_destroy(texture);
  sfSprite_destroy(image);
}

void	my_sprite2(sfRenderWindow *window)
{
  static sfIntRect      area = {0, 0, 100, 300};
  static sfVector2f     pos = {-150, 700};
  static sfVector2f     scale = {1, 1};
  static int            frame = 0;
  sfSprite              *image;
  sfTexture             *texture;

  if (frame++ == 60)
    {
      area.left += 101;
      if (area.left > 300)
	area.left = 0;
      frame = 0;
    }
  pos.x++;
  image = sfSprite_create();
  texture = sfTexture_createFromFile("addon/sprite_2.png", &area);
  sfSprite_setTexture(image, texture, sfTrue);
  sfSprite_setPosition(image, pos);
  sfSprite_setScale(image, scale);
  sfRenderWindow_drawSprite(window, image, NULL);
  sfTexture_destroy(texture);
  sfSprite_destroy(image);
}

void	my_sprite3(sfRenderWindow *window)
{
  static sfIntRect      area = {0, 0, 100, 300};
  static sfVector2f     pos = {-300, 700};
  static sfVector2f     scale = {1, 1};
  static int            frame = 0;
  sfSprite              *image;
  sfTexture             *texture;

  if (frame++ == 60)
    {
      area.left += 101;
      if (area.left > 300)
	area.left = 0;
      frame = 0;
    }
  pos.x++;
  image = sfSprite_create();
  texture = sfTexture_createFromFile("addon/sprite_3.png", &area);
  sfSprite_setTexture(image, texture, sfTrue);
  sfSprite_setPosition(image, pos);
  sfSprite_setScale(image, scale);
  sfRenderWindow_drawSprite(window, image, NULL);
  sfTexture_destroy(texture);
  sfSprite_destroy(image);
}
