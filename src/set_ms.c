/*
** set_ms.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Sun May 28 13:44:48 2017 clem
** Last update Sun May 28 16:56:28 2017 Hugo WALTER
*/

#include "my.h"

t_mapsize	*set_ms(t_mapsize *ms)
{
  ms->hb->j = 0;
  ms->sc1->left = 0;
  ms->sc1->right = 0;
  ms->sc1->stock.x = 708;
  ms->sc1->stock.y = 800;
  ms->sc1->mvm = 0;
  ms->sc1->nomvm = 0;
  ms->sc1->obj = 0;
  ms->sc1->clickobj = 0;
  ms->st->maintheme = ms->music->maintheme;
  ms->st->vol = 50;
  ms->st->wasinset = 0;
  ms->cd->wasincredit = 0;
  ms->cd->speedcd = 1;
  ms->port->speedsky = 0.5;
  return (ms);
}
