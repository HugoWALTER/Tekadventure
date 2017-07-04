/*
** mvm_hb.c for mvm_hb in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:30:42 2017 Hugo WALTER
** Last update Sun May 28 16:40:52 2017 Hugo WALTER
*/

#include "my.h"

int	check_first_plan(t_mapsize *ms, char **tab)
{
  if ((check_plan(ms, ms->sc1->lastpos, tab) == 1 &&
       check_plan(ms, ms->sc1->mp, tab) == 2)
      || (check_plan(ms, ms->sc1->lastpos, tab) == 1 &&
	  check_plan(ms, ms->sc1->mp, tab) == 3))
  {
    if (check_plan(ms, ms->sc1->lastpos, tab) == 1 &&
	check_plan(ms, ms->sc1->mp, tab) == 2)
      return (1);
    if (check_plan(ms, ms->sc1->lastpos, tab) == 1 &&
	check_plan(ms, ms->sc1->mp, tab) == 3)
      return (1);
  }
  return (0);
}

int	check_second_plan(t_mapsize *ms, char **tab)
{
  if ((check_plan(ms, ms->sc1->lastpos, tab) == 2 &&
       check_plan(ms, ms->sc1->mp, tab) == 1)
      || (check_plan(ms, ms->sc1->lastpos, tab) == 2 &&
	  check_plan(ms, ms->sc1->mp, tab) == 3))
  {
    if (check_plan(ms, ms->sc1->lastpos, tab) == 2 &&
	check_plan(ms, ms->sc1->mp, tab) == 1)
      return (1);
    if (check_plan(ms, ms->sc1->lastpos, tab) == 2 &&
	check_plan(ms, ms->sc1->mp, tab) == 3)
      return (1);
  }
  return (0);
}

int	check_third_plan(t_mapsize *ms, char **tab)
{
  if ((check_plan(ms, ms->sc1->lastpos, tab) == 3 &&
       check_plan(ms, ms->sc1->mp, tab) == 2)
      || (check_plan(ms, ms->sc1->lastpos, tab) == 3 &&
	  check_plan(ms, ms->sc1->mp, tab) == 1))
    {
      if (check_plan(ms, ms->sc1->lastpos, tab) == 3 &&
	  check_plan(ms, ms->sc1->mp, tab) == 2)
	return (1);
      if (check_plan(ms, ms->sc1->lastpos, tab) == 3 &&
	  check_plan(ms, ms->sc1->mp, tab) == 1)
	return (1);
    }
  return (0);
}

int     check_mv_box(t_mapsize *ms, char **tab)
{
  if (check_first_plan(ms, tab) == 1)
    return (1);
  if (check_second_plan(ms, tab) == 1)
    return (1);
  if (check_third_plan(ms, tab) == 1)
    return (1);
  return (0);
}
