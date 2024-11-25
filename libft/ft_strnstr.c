/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:25:56 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:07:37 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locates a substring within a string.
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	s2len;
	size_t	s1len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!s1 || !s2 || (s1len == 0 && s2len != 0))
		return (0);
	if (s2len == 0)
		return ((char *)s1);
	i = 0;
	while (i < len)
	{
		if (i > s1len - s2len)
			return (0);
		if (ft_strncmp(s1 + i, s2, s2len) == 0 && !(i + s2len > len))
			return (((char *)s1) + i);
		i++;
	}
	if (s1len == 0 && s2len == 0)
		return ((char *)s1 + s1len);
	return (0);
}
