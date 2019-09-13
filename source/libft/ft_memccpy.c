/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:00:55 by tmentor           #+#    #+#             */
/*   Updated: 2019/06/08 09:44:35 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char				*udst;
	unsigned const char			*usrc;
	size_t						i;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned const char *)src;
	while (i < n)
	{
		udst[i] = usrc[i];
		if (usrc[i] == (unsigned char)c)
		{
			return ((void *)udst + i + 1);
		}
		i++;
	}
	return (0);
}
