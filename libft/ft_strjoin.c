/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:17:44 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:06:00 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Joins two strings into a new string.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	y;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc((len + 1) * (sizeof(char)));
	if (!s3)
		return (0);
	y = 0;
	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		s3[i++] = s2[y++];
	}
	s3[i] = '\0';
	return (s3);
}
