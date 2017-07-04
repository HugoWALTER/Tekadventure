/*
** my_tab.c for  in /home/clem/Tek1/CSFML/tekadventure
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Mon May 22 18:04:36 2017 clem
** Last update Sun May 28 16:45:30 2017 Hugo WALTER
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  while (s1[i] && s1[i] == s2[i])
    i++;
  j = s1[i];
  k = s2[i];
  if (j == k)
    return (0);
  if (j < k)
    return (-1);
  if (j > k)
    return (1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	len;

  len = my_strlen(dest);
  i = 0;
  while (src[i])
    {
      dest[len + i] = src[i];
      i++;
    }
  dest[len + i] = '\0';
  return (dest);
}

char	*my_read(char **av)
{
  char	*buffer;
  int	fd;

  buffer = malloc(sizeof(char *) * 1000);
  if ((fd = open("file.ini", O_RDONLY)) == -1)
    return (NULL);
  read(fd, buffer, 1000);
  my_strcat(buffer, "\n");
  return (buffer);
}

char	**tab_char(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = j = k = 0;
  if (str == NULL)
    return (NULL);
  tab = malloc(sizeof(char **) * my_strlen(str));
  while (str[k])
    {
      j = 0;
      tab[i] = malloc(sizeof(char *) * my_strlen(str));
      while (str[k] != '\n')
	{
	  tab[i][j] = str[k];
	  j++;
	  k++;
	}
      tab[i][j] = str[k];
      i++;
      k++;
    }
  return (tab);
}
