/*
** mvm_hbs2.c for mvm_hbs2 in /home/walter_h/tekadventure/src
**
** Made by Hugo WALTER
** Login   <walter_h@epitech.net>
**
** Started on  Fri May 26 22:30:42 2017 Hugo WALTER
** Last update Sun May 28 16:41:07 2017 Hugo WALTER
*/

#include "my.h"

int	check_first_plans2(t_mapsize *ms, char **tab)
{
  if ((check_plan(ms, ms->sc2->lastpos, tab) == 1 &&
       check_plan(ms, ms->sc2->mp, tab) == 2)
      || (check_plan(ms, ms->sc2->lastpos, tab) == 1 &&
	  check_plan(ms, ms->sc2->mp, tab) == 3))
  {
    if (check_plan(ms, ms->sc2->lastpos, tab) == 1 &&
	check_plan(ms, ms->sc2->mp, tab) == 2)
      return (1);
    if (check_plan(ms, ms->sc2->lastpos, tab) == 1 &&
	check_plan(ms, ms->sc2->mp, tab) == 3)
      return (1);
  }
  return (0);
}

int	check_second_plans2(t_mapsize *ms, char **tab)
{
  if ((check_plan(ms, ms->sc2->lastpos, tab) == 2 &&
       check_plan(ms, ms->sc2->mp, tab) == 1)
      || (check_plan(ms, ms->sc2->lastpos, tab) == 2 &&
	  check_plan(ms, ms->sc2->mp, tab) == 3))
  {
    if (check_plan(ms, ms->sc2->lastpos, tab) == 2 &&
	check_plan(ms, ms->sc2->mp, tab) == 1)
      return (1);
    if (check_plan(ms, ms->sc2->lastpos, tab) == 2 &&
	check_plan(ms, ms->sc2->mp, tab) == 3)
      return (1);
  }
  return (0);
}

int	check_third_plans2(t_mapsize *ms, char **tab)
{
  if ((check_plan(ms, ms->sc2->lastpos, tab) == 3 &&
       check_plan(ms, ms->sc2->mp, tab) == 2)
      || (check_plan(ms, ms->sc2->lastpos, tab) == 3 &&
	  check_plan(ms, ms->sc2->mp, tab) == 1))
    {
      if (check_plan(ms, ms->sc2->lastpos, tab) == 3 &&
	  check_plan(ms, ms->sc2->mp, tab) == 2)
	return (1);
      if (check_plan(ms, ms->sc2->lastpos, tab) == 3 &&
	  check_plan(ms, ms->sc2->mp, tab) == 1)
	return (1);
    }
  return (0);
}

int     check_mv_boxs2(t_mapsize *ms, char **tab)
{
  if (check_first_plans2(ms, tab) == 1)
    return (1);
  if (check_second_plans2(ms, tab) == 1)
    return (1);
  if (check_third_plans2(ms, tab) == 1)
    return (1);
  return (0);
}
