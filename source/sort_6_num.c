/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_6_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 10:41:09 by tmentor           #+#    #+#             */
/*   Updated: 2019/09/13 10:41:11 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*sorts sequence x for 3 < x < 7 numbers*/
/*moves the smallest numbers into stack b, so that the smallest number is the 
  last number in b*/
int             lolo(int *a, int n, int mid, int *x)
{
    while (x[1] - x[0] != 1 && x[1] - x[0] != 0)
    {
        if (x[1] - x[0] != 1)
            mid = mid + (x[1] - x[0]);
        x[2] = 0;
        x[0] = 0;
        x[1] = 0;
        while (x[2] < n)
        {
            if (a[x[2]] < mid)
                x[0]++;
            else
                x[1]++;
            x[2]++;
        }
    }
    return (mid);
}

static void     lole(int *a, int *b, int *n, int i)
{
    if (i < (n[1] - n[0]) / 2)
    {
        while (i != 0)
        {
            r(a, b, "ra", n);
            ft_putendl("ra");
            i--;
        }
    }
    else
    {
        while (1 != (n[1] - n[0]))
        {
            rr(a, b, "rra", n);
            ft_putendl("rra");
            i++;
        }
        i = 0;
    }
}

/*pushes all the sorted values in b to a (final step!!!!)*/
static void     pa(int *a, int *b, int *n)
{
    p(a, b, "pa", n);
    ft_putendl("pa");
}

/*identifies the mean to determine how many possing from either end numbers are*/
int             mid(int *a, int n)
{
    int mid;
    int x[3];

    x[2] = 0;
    mid = 0;
    x[0] = 0;
    x[1] = 0;
    while (x[2] < n)
    {
        mid = mid + a[x[2]];
        x[2]++;
    }
    mid = mid / x[2];
    x[2] = 0;
    while (x[2] < n)
    {
        if (a[x[2]] < mid)
            x[0]++;
        else
            x[1]++;
        x[2]++;
    }
    mid = lolo(a, n, mid, x);
    return (mid);
}

/*identifies the particular 3 number permutation and passes to suitable operation*/
void            bsort(int *a, int *b, int *n)
{
    int m;
    int i;

    if (!checka(a, n[1]))
    {
        m = mid(a, n[1]);
        i = 0;
        while (i < n[1] - n[0])
        {
            if (a[0] < m)
            {
                p(a, b, "pb", n);
                ft_putendl("pb");
                i = 0;
            }
            if (a[i] < m)
                lole(a, b, n, i);
            i++;
        }
        asort(a, b, n);
        revsort(a, b, n);
        while (n[0] != 0)
            pa(a, b, n);
    }
}
