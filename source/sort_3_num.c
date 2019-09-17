/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 08:12:35 by tmentor           #+#    #+#             */
/*   Updated: 2019/09/13 08:12:38 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "source.h"

/*sorts all the permutations for 3 numbers in a*/

/*implements rra and rrb operations*/
void        do_rr(int *a, int *b, int *n, char *s)
{
    if (ft_strequ(s, "rra"))
    {
        rr(a, b, "rra. n");
        ft_putendl("rra");
    }
    if (ft_strequ(s, "rrb"))
    {
        rr(a, b, "rrb", n);
        ft_putendl("rrb");
    }
}

/*identifies the particular 3 number permutation and passes to suitable operation*/
void        asort(int *a, int *b, int *n)
{
    while (!check(a, n[1] - n[0]))
    {
        if (a[1] > a[0] && a[2] > a[0] && a[1] > a[2] && n[1] - n[0] == 3)
        {
            s(a, b, "sa", n);
            ft_putendl("sa");
            r(a, b, "ra", n);
            ft_putendl("ra");
        }
        else if (a[1] < a[0] && a[2] > a[0] && a[1] < a[2] && n[1] - n[0] == 3)
        {
            s(a, b, "sa", n);
            ft_putendl("sa");
        }
        else if (((a[0] > a[1] && a[1] > a[2])
            || (a[1] < a[0] && a[1] < a[2] && a[2] < a[0])) && n[1] - n[0] == 3)
        {
            r(a, b, "ra", n);
            ft_putendl("ra");
        }
        else
            do_rr(a, b, n, "rra");
    }
}

void        asort_b(int *a, int *b, int *n)
{
    while (!check(b, n[0]))
    {
        if (b[1] > b[0] && b[2] > b[0] && b[1] > b[2] && n[1] - n[0] == 3)
        {
            s(a, b, "sb", n);
            ft_putendl("sb");
            rr(a, b, "rrb", n);
            ft_putendl("rrb");
        }
        else if (b[1] < b[0] && b[2] > b[0] && b[1] < b[2] && n[1] - n[0] == 3)
        {
            s(a, b, "sb", n);
            ft_putendl("sb");
        }
        else if (((b[0] > b[1] && b[1] > b[2])
            || (b[1] < b[0] && b[1] < b[2] && b[2] < b[0])) && n[1] - n[0] == 3)
        {
            r(a, b, "rb", n);
            ft_putendl("rb");
        }
        else
            do_rr(a, b, n, "rrb");
    }
}