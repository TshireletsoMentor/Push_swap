/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:07:51 by tmentor           #+#    #+#             */
/*   Updated: 2019/06/08 10:48:05 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && j < n)
	{
		while (s1[i + j] == s2[i] && s2[i] != '\0' && (j + i) < n)
			i++;
		if (s2[i] == '\0')
			return ((char *)s1 + j);
		i = 0;
		j++;
	}
	return (NULL);
}
