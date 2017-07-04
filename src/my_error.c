/*
** my_error.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Sun May 28 14:58:24 2017 clem
** Last update Sun May 28 16:43:18 2017 Hugo WALTER
*/

#include "my.h"

int	my_error_ini()
{
  my_putstr_n("Some files on .ini or ini file can't be open.");
  return (84);
}

int	my_ptr_6(void (*ptr[8])(), t_my_framebuffer *buffer,
		 t_mapsize *ms, sprites sprite)
{
  ptr[6](buffer, ms->window, sprite, ms);
  return (0);
}

int	my_destroy_menu(int i, t_mapsize *ms)
{
  sfMusic_destroy(ms->menu);
  return (i);
}
