/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:26:09 by tmentor           #+#    #+#             */
/*   Updated: 2019/09/13 07:26:13 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*dub_check checks for doubles in the sequence*/
void    dub_check(int ac, int *num)
{
  int   i;
  int   j;

  j = 0;
  if (ac > 1)
  {
    while(++j < ac)
    {
      i = 0;
      while (i < j)
      {
        if (num[i] == num[j])
        {
          ft_putendl("Error");
          exit(0);
        }
        i++;
      }
    }
  }
}

/*-converts str number to interget from av with single number
  -prints out error if input cannot be a valid integer*/
void    place1(int *n, int *a, char **av)
{
  if ((a[n[1] - 1] = ft_atoi(av[n[2]]))
      || ft_strequ(av[n[2]], "0"))
  {
  }
  else
  {
    ft_putendl("Error");
    exit(0);
  }
}

/*-converts str number to interget from av with multiple numbers
  -prints out error if input cannot be a valid integer*/
void    place2(int *n, int *a, char **av)
{
  int   i;

  i = 0;
  while (i < n[0])
  {
    if ((a[n[2]] = ft_atoi(av[i])) 
        || ft_strequ(av[i], "0"))
    {
      n[2]++;
      i++;
    }
    else
    {
      ft_putendl("Error");
      exit(0);
    }
  }
}

/*-calls place2 function and dub_check thereafter*/
void    erpl2(int *a, int *x, char **tmp)
{
  place2(x, a, tmp);
  dub_check(x[1], a);
}

/*-calls place1 function and dub_check thereafter*/
void    erpl1(int *a, int *x, char **tmp)
{
  place1(x, a, tmp);
  dub_check(x[1], a);
}
