/*
** my_destroy.c for  in /home/clem/Tek1/CSFML/tekadventure
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Fri May  5 15:27:05 2017 clem
** Last update Sun May 28 16:43:05 2017 Hugo WALTER
*/

#include "my.h"

int	destroy(t_mapsize *ms)
{
  sfRenderWindow_destroy(ms->window);
  sfMusic_destroy(ms->play->trame);
  free(ms);
  return (0);
}

int	destroy_settings(t_mapsize *ms)
{
  sfTexture_destroy(ms->st->txtset);
  sfTexture_destroy(ms->st->tvolup);
  sfTexture_destroy(ms->st->tvoldown);
  sfTexture_destroy(ms->st->ttheme);
  sfTexture_destroy(ms->st->ttheme2);
  sfText_destroy(ms->st->volume);
  sfText_destroy(ms->st->valider);
  sfText_destroy(ms->st->themes);
  sfText_destroy(ms->st->themename1);
  sfText_destroy(ms->st->themename2);
  sfSprite_destroy(ms->st->spt);
  sfSprite_destroy(ms->st->svolup);
  sfSprite_destroy(ms->st->svoldown);
  sfSprite_destroy(ms->st->stheme);
  sfSprite_destroy(ms->st->stheme2);
  free(ms->st);
  return (0);
}

int	destroy_play(t_mapsize *ms)
{
  sfTexture_destroy(ms->tmenu);
  sfSprite_destroy(ms->smenu);
  sfText_destroy(ms->playbutton);
  sfText_destroy(ms->settings);
  sfText_destroy(ms->credits);
  return (0);
}

int	destroy_credits(t_mapsize *ms)
{
  sfText_destroy(ms->cd->created);
  sfText_destroy(ms->cd->soundsgn);
  sfText_destroy(ms->cd->hugo);
  sfText_destroy(ms->cd->projectld);
  sfText_destroy(ms->cd->clement);
  sfText_destroy(ms->cd->graphiste);
  sfText_destroy(ms->cd->francois);
  sfText_destroy(ms->cd->thx);
  return (0);
}
