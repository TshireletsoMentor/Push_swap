/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:26:40 by tmentor           #+#    #+#             */
/*   Updated: 2019/09/13 07:26:44 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "source/push_swap.h"

/*Passes sequence to sorting functions depending on length of sequence*/
static void     push_swap(int *a, int *b, int *n)
{
    if (n[1] > 6)
        csort(a, b, n);
    else if (n[1] > 3 && n[1] < 7)
        bsort(a, b, n);
    else
        asort(a, b, n);
}

/*-intcheck converts arguments of numbers delimited by spaces into
  a integer array*/
static void     intcheck(int ac, char **av, int *n)
{
  int     x[3];
  int     i[3];
  int     a[n[1]];
  int     b[n[1]];

  i[0] = 1;
  i[1] = 0; 
  x[1] = 0;
  while (i[0] < ac)
  {
    x[0] = ft_wordcount(av[i[0]], ' ');
    x[1] += x[0];
    if (x[0] > 1)
    {
      x[2] = x[1] - x[0];
      add_erpl2(av[i[0]], a, x);
    }
    else if (x[0] != 0)
    {
      x[2] = i[0];
      erpl1(a, x, av);
    }
    i[0]++;
  }
  push_swap(a, b, n);
}

/*The main takes in str arguments
Precautions were made to make sure:
    -words(numbers) deliminted by spaces count despite the sequence being in a 
     single argument or within multiple arguments
Subsequent number were passed to intcheck*/

int             main(int ac, char **av)
{
  int     i;
  int     num[2];

  if (ac > 1)
  {
    i = 1;
    num[1] = 0;
    while (i < ac)
    {
      num[0] = ft_wordcount(av[i], ' ');
      if (num[0] == 0 && !ft_strequ(av[i], ""))
      {
          ft_putendl("Error");
          exit(0);
      }
      num[1] += num[0];
      i++;
    }
    if (num[1] == 0)
      exit(0);
    num[0] = 0;
    intcheck(ac, av, num);
  }
}
