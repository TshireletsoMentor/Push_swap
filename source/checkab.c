/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 08:21:50 by tmentor           #+#    #+#             */
/*   Updated: 2019/09/13 08:21:53 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h/push_swap.h"

/*checks whether the sequence is in ascending order, terminates the program if
the full sequence is in ascending order

-checks for stack a*/
int		checka(int *a, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

/*-checks for stack b*/
int		checkb(int *b, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		if (b[i] < b[i + 1])
			return (0);
		i++;
	}
	return (1);
}
