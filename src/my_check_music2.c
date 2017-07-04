/*
** my_check_music2.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Sat May 27 14:06:14 2017 clem
** Last update Sun May 28 16:41:56 2017 Hugo WALTER
*/

#include "my.h"

char	*my_piraterie(t_mapsize *ms, char **tab, int i, int j)
{
  sfMusic	*test;

  if ((test = sfMusic_createFromFile(ms->music->piraterie =
				     epur_n(&tab[i][j + 1]))) == NULL)
    {
      sfMusic_destroy(test);
      return (NULL);
    }
  sfMusic_destroy(test);
  return ("No Error");
}

char	*my_maintheme(t_mapsize *ms, char **tab, int i, int j)
{
  sfMusic	*test;

  if ((test = sfMusic_createFromFile(ms->music->maintheme =
				     epur_n(&tab[i][j + 1]))) == NULL)
    {
      sfMusic_destroy(test);
      return (NULL);
    }
  sfMusic_destroy(test);
  return ("No Error");
}

char	*set_music2(char **tab, t_mapsize *ms, int i, int j)
{
  if (my_strcmp("menu", ms->music->tmp) == 0 &&
      my_menu(ms, tab, i, j) == NULL)
    return (NULL);
  if (my_strcmp("paper", ms->music->tmp) == 0 &&
      my_paper(ms, tab, i, j) == NULL)
    return (NULL);
  if (my_strcmp("taverne", ms->music->tmp) == 0 &&
      my_taverne(ms, tab, i, j) == NULL)
    return (NULL);
  if (my_strcmp("piraterie", ms->music->tmp) == 0 &&
      my_piraterie(ms, tab, i, j) == NULL)
    return (NULL);
  if (my_strcmp("maintheme", ms->music->tmp) == 0 &&
      my_maintheme(ms, tab, i, j) == NULL)
    return (NULL);
}

char	*set_music(char **tab, t_mapsize *ms, int i)
{
  int	j;

  while (my_strcmp(tab[i], "\n") != 0)
    {
      j = 0;
      if ((ms->music->tmp = malloc(sizeof(my_strlen(tab[i])))) == NULL)
	return (NULL);
      while (tab[i][j] && tab[i][j] != '=')
	ms->music->tmp[j] = tab[i][j++];
      ms->music->tmp[j] = '\0';
      if (my_strcmp("drink", ms->music->tmp) == 0 &&
	  my_drink(ms, tab, i, j) == NULL)
	return (NULL);
      if (my_strcmp("foret", ms->music->tmp) == 0 &&
	  my_foret(ms, tab, i, j) == NULL)
	return (NULL);
      if (set_music2(tab, ms, i, j) == NULL)
	return (NULL);
      free(ms->music->tmp);
      i++;
    }
  return ("No Error");
}
