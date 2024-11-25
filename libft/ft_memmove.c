/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:07:44 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:04:25 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Moves memory safely, handling overlaps.
void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char		*dest;
	const char	*src;

	if (!destination && !source)
		return (NULL);
	dest = destination;
	src = source;
	if (dest > src)
	{
		while (size--)
			dest[size] = src[size];
	}
	else
		ft_memcpy(dest, src, size);
	return (destination);
}
