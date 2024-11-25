/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:04:22 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:04:57 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Sets a memory area to a specified value.
void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = count;
	while (count-- > 0)
		*(unsigned char *)pointer++ = (unsigned char)value;
	return (pointer - i);
}
