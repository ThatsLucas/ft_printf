/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:05:41 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:28:36 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Concatenates two strings, 
//ensuring the total length doesn't exceed the given size.
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;
	size_t	j;

	i = 0;
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	j = dstsize;
	if (size == 0 || size <= dstsize)
		return (size + srcsize);
	while (src[i] && i < size - dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dstsize + srcsize);
}
