/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:51:36 by tmentor           #+#    #+#             */
/*   Updated: 2019/06/08 10:00:23 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*udst;
	const char		*usrc;

	if (!dst && !src)
		return (NULL);
	udst = (char *)dst;
	usrc = (const char *)src;
	if (udst <= usrc)
	{
		i = 0;
		while (i++ < len)
			udst[i - 1] = usrc[i - 1];
	}
	else
	{
		i = len;
		while (i > 0)
		{
			udst[i - 1] = usrc[i - 1];
			i--;
		}
	}
	return (dst);
}
