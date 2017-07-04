/*
** my_check_music.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Sat May 27 14:04:20 2017 clem
** Last update Sun May 28 16:42:47 2017 Hugo WALTER
*/

#include "my.h"

char	*my_drink(t_mapsize *ms, char **tab, int i, int j)
{
  sfMusic	*test;

  if ((test = sfMusic_createFromFile(ms->music->drink =
				     epur_n(&tab[i][j + 1]))) == NULL)
    {
      sfMusic_destroy(test);
      return (NULL);
    }
  sfMusic_destroy(test);
  return ("No Error");
}

char	*my_foret(t_mapsize *ms, char **tab, int i, int j)
{
  sfMusic	*test;

  if ((test = sfMusic_createFromFile(ms->music->foret =
				     epur_n(&tab[i][j + 1]))) == NULL)
    {
      sfMusic_destroy(test);
      return (NULL);
    }
  sfMusic_destroy(test);
  return ("No Error");
}

char	*my_menu(t_mapsize *ms, char **tab, int i, int j)
{
  sfMusic	*test;

  if ((test = sfMusic_createFromFile(ms->music->menu =
				     epur_n(&tab[i][j + 1]))) == NULL)
    {
      sfMusic_destroy(test);
      return (NULL);
    }
  sfMusic_destroy(test);
  return ("No Error");
}

char	*my_paper(t_mapsize *ms, char **tab, int i, int j)
{
  sfMusic	*test;

  if ((test = sfMusic_createFromFile(ms->music->paper =
				     epur_n(&tab[i][j + 1]))) == NULL)
    {
      sfMusic_destroy(test);
      return (NULL);
    }
  sfMusic_destroy(test);
  return ("No Error");
}

char	*my_taverne(t_mapsize *ms, char **tab, int i, int j)
{
  sfMusic	*test;

  if ((test = sfMusic_createFromFile(ms->music->taverne =
				     epur_n(&tab[i][j + 1]))) == NULL)
    {
      sfMusic_destroy(test);
      return (NULL);
    }
  sfMusic_destroy(test);
  return ("No Error");
}
