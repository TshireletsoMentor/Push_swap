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

void        pb_asort(int *a, int *b, int *n)
{
    p(a, b, "pb", n);
    ft_putendl("pb");
    if (n[1] - n[0] == 3)
        asort(a, b, n);
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