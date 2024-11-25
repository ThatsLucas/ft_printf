/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:13:34 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:07:23 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_findstart(const char *str, char const *set)
{
	size_t	i;
	size_t	y;
	int		count;

	i = 0;
	while (str[i])
	{
		y = 0;
		count = 0;
		while (set[y])
		{
			if (set[y] == str[i])
				count = 1;
			y++;
		}
		if (count == 0)
			return (i);
		i++;
	}
	return (-1);
}

static long	ft_findend(const char *str, char const *set)
{
	size_t	i;
	size_t	y;
	int		count;

	i = ft_strlen(str);
	if (i > 0)
	{
		while (str[--i])
		{
			y = 0;
			count = 0;
			while (set[y])
			{
				if (set[y] == str[i])
				{
					count = 1;
				}
				y++;
			}
			if (count == 0)
				return (i + 1);
		}
	}
	return (-1);
}

// Trims specified characters from the start and end of a string.
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	long	start;
	long	end;

	start = ft_findstart(s1, set);
	end = ft_findend(s1, set);
	trim = (char *)malloc((1 + end - start) * (sizeof(char)));
	if (!trim)
		return (0);
	ft_strlcpy(trim, s1 + start, 1 + end - start);
	return (trim);
}

/* ULTIMATE TRIM POUR PLUS TARD MDR
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s3;
	size_t	size;
	size_t	setsize;
	size_t	i;
	size_t	y;
	size_t	j;
	char	*s3;
	size_t	i;
	size_t	y;
	size_t	j;

	size = ft_strlen(s1);
	setsize = ft_strlen(set);
	s3 = (char *) malloc((size + 1) * sizeof(char));
	if (!s3)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		y = 0;
		while (s1[i] == set[y])
		{
			y++;
			i++;
		}
		if (setsize != y)
		{
			i -= y;
		}
		s3[j++] = s1[i];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}*/