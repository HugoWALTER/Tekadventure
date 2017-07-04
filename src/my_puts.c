/*
** my_puts.c for  in /home/clem/Tek1/CSFML/tekadventure/src
**
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
**
** Started on  Thu May 25 23:02:38 2017 clem
** Last update Sun May 28 16:45:04 2017 Hugo WALTER
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}

void	my_putstr_n(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
  my_putchar('\n');
}
