/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:26:22 by tmentor           #+#    #+#             */
/*   Updated: 2019/09/13 07:26:26 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h/push_swap.h"

static void ra_or_rra2(int *a, int *b, int *n, int *i)
{
    if (i[1] < i[0] / 2)
    {
        while (i[1] > 0)
        {
            r(a, b, "rb", n);
            ft_putendl("rb");
            i[1]--;
        }
    }
    else
    {
        while (i[1] < i[0])
        {
            rr(a, b, "rrb", n);
            ft_putendl("rrb");
            i[1]++;
        }
    }
    
}

void        pb_asort(int *a, int *b, int *n)
{
    pa(a, b, "pb", n);
    ft_putendl("pb");
    if (n[1] - n[0] == 3)
        asort(a, b, n);
}

void        passb(int *a, int *b, int *n)
{
    int max;
    int i[2];

    while (n[0] > 0)
    {
        i[0] = 0;
        max = -2147483648;
        i[1] = 0;
        while (i[0] < n[0])
        {
            if (b[i[0]] > max)
            {
                max = b[i[0]];
                i[1] = i[0];
            }
            i[0]++;
        }
        ra_or_rra2(a, b, n, i);
        pa(a, b, "pa", n);
        ft_putendl("pa");
    }
}

void        ex(int *min, int *max, int *i)
{
    if (min[1] >= max[2])
        min[1] = max[2] - 1;
    i[2] = min[1];
}

void        add_erpl2(char *av, int *a, int *x)
{
    char    **tmp;
    int     i;

    i = 0; 
    tmp = ft_strsplit(av, ' ');
    erpl2(a, x, tmp);
    while (i < ft_wordcount(av, ' '))
    {
        free(tmp[i]);
        i++;
    }
    free(tmp);
}