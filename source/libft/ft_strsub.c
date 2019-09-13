/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:07:01 by tmentor           #+#    #+#             */
/*   Updated: 2019/06/09 09:40:43 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	n;

	n = 0;
	if (s == NULL || start > ft_strlen(s) ||
			(new = (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (n++ < len && s[start] != '\0')
		new[n - 1] = s[start + n - 1];
	new[n - 1] = '\0';
	return (new);
}
