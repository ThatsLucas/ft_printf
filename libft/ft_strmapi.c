/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:57:38 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:07:04 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies a function to each character of a string and returns a new string.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	slen;
	char	*result;

	slen = ft_strlen(s);
	i = 0;
	result = (char *)ft_calloc(slen + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i < slen)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	return (result);
}
