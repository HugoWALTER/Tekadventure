/*
** my_strtotab.c for my_strtotab in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Tue May  9 18:18:49 2017 Hugo WALTER
** Last update Sun May 28 16:45:17 2017 Hugo WALTER
*/

#include "my.h"

char	**my_strtotab(char *src, char d)
{
  char	**ret;
  int	i;
  int	j;
  int	k;
  int	l;

  i = l = j = 0;
  if (d < 0 && d > 127)
    return (NULL);
  while (src[i++]);
  if ((ret = malloc(sizeof(char **) * i + 1)) == NULL)
    return (NULL);
  while (src[l])
    {
      k = 0;
      if ((ret[j] = malloc(sizeof(char *) * i + 1)) == NULL)
	return (NULL);
      while (src[l] && src[l] != d)
	ret[j][k++] = src[l++];
      ret[j][k] = '\0';
      j++;
      l++;
    }
  ret[j] = NULL;
  return (ret);
}
