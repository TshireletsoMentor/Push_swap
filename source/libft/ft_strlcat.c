/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 06:59:17 by tmentor           #+#    #+#             */
/*   Updated: 2019/06/01 11:29:55 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dlen;
	size_t slen;
	size_t n;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	n = 0;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[n] != '\0' && (dlen + n) < (dstsize - 1))
	{
		dst[dlen + n] = src[n];
		n++;
	}
	dst[dlen + n] = '\0';
	return (dlen + slen);
}
