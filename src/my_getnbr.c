/*
** my_getnbr.c for my_getnbr in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Mon May  1 17:57:59 2017 Hugo WALTER
** Last update Sun May 28 16:43:55 2017 Hugo WALTER
*/

#include "my.h"

int     gnb(char *str)
{
  int   res;
  int   sign;

  sign = 1;
  while (*str && (*str == '-' || *str == '+'))
    {
      if (*str == '-')
	sign = sign * -1;
      str++;
    }
  res = 0;
  while (*str && *str >= '0' && *str <= '9')
    res = res * 10 + (*str++ - '0');
  return (res * sign);
}
