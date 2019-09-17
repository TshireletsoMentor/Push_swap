/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:25:05 by tmentor           #+#    #+#             */
/*   Updated: 2019/09/13 07:25:09 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "source.h"

/*Contains all the functions(rules) used to alter the order of the sequence*/

/*function for "sa", "sb" and "ss"*/
void        s(int *a, int *b, char *str, int *n)
{
    int tmp;

    if ((ft_strequ(str, "sa") || ft_strequ(str, "ss")) && n[1] - n[0] > 1)
    {
        tmp = a[0];
        a[0] = a[1];
        a[1] = tmp;
    }
    if ((ft_strequ(str, "sb") || ft_strequ(str, "ss")) && n[0] > 1)
    {
        tmp = b[0];
        b[0] = b[1];
        b[1] = tmp;
    }
}

/*function for "pb"*/
int         p2(int *a, int *b, int *n)
{
    int     i;
    int     index;

    i = n[0];
    index = 0;
    while (i >= 0)
    {
        b[i + 1] = b[i];
        i--;
    }
    b[0] = a[0];
    while (index < n[1] - n[0])
    {
        a[index] = a[index + 1];
        index++;
    }
    n[0]++;
    return (n[0]);
}

/*function for "pa", passes to "pb"*/
int         p1(int *a, int *b, char *str, int *n)
{
    int     i;
    int     index;

    if (ft_strequ(str, "pa") && n[0] != 0)
    {
        i = n[1] - n[0];
        index = 0;
        while(i >= 0)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[0] = b[0];
        while (index < n[0] - 1)
        {
            b[index] = b[index + 1];
            index++;
        }
        n[0]--;
    }
    if (ft_strequ(str, "pb") && n[1] - n[0] != 0)
        n[0] = p2(a, b, n);
    return (n[0]);
}

/*function for "rra", "rrb" and "rrr"*/

void        rr(int *a, int *b, char *str, int *n)
{
    int     i;
    int     tmp;

    if ((ft_strequ(str, "rra") || ft_strequ(str, "rrb")) && n[1] - n[0] != 0)
    {
        i = n[1] - n[0] - 1;
        tmp = a[i];
        while (i > 0)
        {
            a[i] = a[i - 1];
            i--;
        }
        a[0] = tmp;
    }
    if ((ft_strequ(str, "rra") || ft_strequ(str, "rrb")) && n[0] != 0)
    {
        i = n[1] - n[0] - 1;
        tmp = b[i];
        while (i > 0)
        {
            b[i] = b[i - 1];
            i--;
        }
        b[0] = tmp;
    }
}

/*function for "ra", "rb" and "rr"*/

void        r(int *a, int *b, char *str, int *n)
{
    int     i;
    int     tmp;

    if ((ft_strequ(str, "ra") || ft_strequ(str, "rr")) && n[1] - n[0] != 0)
    {
        i = 0;
        tmp = a[i];
        while (i < n[1] - n[0] -1)
        {
            a[i] = a[i + 1];
            i++;
        }
        a[i] = tmp;
    }
    if ((ft_strequ(str, "rb") || ft_strequ(str, "rr")) && n[0] != 0)
    {
        i = 0;
        tmp = b[i];
        while (i < n[0] - 1)
        {
            b[i] = b[i + 1];
            i++;
        }
        b[i] = tmp;
    }
}
