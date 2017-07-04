/*
** my_func.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Sat May 27 14:09:28 2017 clem
** Last update Sun May 28 16:43:45 2017 Hugo WALTER
*/

#include "my.h"

void	aff_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    my_putstr_n(tab[i++]);
}

char	*epur_n(char *str)
{
  int	i;
  char	*tmp;

  i = 0;
  if ((tmp = malloc(sizeof(my_strlen(str)))) == NULL)
    return (NULL);
  while (str[i] && str[i] != '\n')
    tmp[i] = str[i++];
  tmp[i] = '\0';
  return (tmp);
}

char	*my_strdup(char *src)
{
  int	i;
  char	*tmp;

  i = 0;
  tmp = malloc(sizeof(char) * my_strlen(src));
  while (src[i])
    tmp[i] = src[i++];
  tmp[i] = '\0';
  return (tmp);
}

char	*set_ini(char **tab, t_mapsize *ms)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      if (my_strcmp(tab[i], "[MUSIC]\n") == 0)
	if (set_music(tab, ms, i++) == NULL)
	  return (NULL);
      if (my_strcmp(tab[i], "[SCENE1]\n") == 0)
	if (set_scene1(tab, ms, i++) == NULL)
	  return (NULL);
      if (my_strcmp(tab[i], "[SCENE2]\n") == 0)
	if (set_scene2(tab, ms, i++) == NULL)
	  return (NULL);
      i++;
    }
  return ("No Error");
}
