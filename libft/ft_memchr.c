/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:41:31 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:04:52 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Finds the first occurrence of a character in a memory area.
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*s1;
	unsigned char	c;

	s1 = (unsigned char *)memoryBlock;
	c = (unsigned char)searchedChar;
	while (size-- > 0)
	{
		if (*s1 == c)
			return (s1);
		s1++;
	}
	return (NULL);
}
