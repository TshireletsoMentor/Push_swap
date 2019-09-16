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


/*dub_check checks for doubles in the sequence*/
void        dub_check(int ac, int *num)
{
    int     cntr;
    int     i;

    cntr = 0;
    if (ac > 1)
    {
        while(++cntr < ac)
        {
            i = 0;
            while (i < cntr)
            {
                if (num[i] == num[cntr])
                {
                    ft_putendl("Error");
                    exit(0);
                }
                i++;
            }
        }
    }
}

/*-converts str number to interget
  -prints out error if input cannot be a valid integer*/
void        place1(int *x, int *a, char **tmp)
{
    if ((a[x[1] - 1] = ft_atoi(tmp[x[2]])) || ft_strequ(tmp[x[2]], "0"))
    {
    }
    else
    {
        ft_putendl("Error");
        exit(0);
    }
    
}

/*-converts str number to interget
  -prints out error if input cannot be a valid integer*/
void        place2(int *n, int *a, char **tmp)
{
    int     i;

    i = 0;
    while (i < n[0])
    {
        if (a[n[2]] = ft_atoi(tmp[i]) || ft_strequ(tmp[i], "0"))
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
void        erpl2(int *a, int *x, char **tmp)
{
    place2(x, a, tmp);
    dub_check(x[1], a);
}

/*-calls place1 function and dub_check thereafter*/
void        erpl1(int *a, int *x, char **tmp)
{
    place(x, a, tmp);
    dub_check(x[1], a);
}
