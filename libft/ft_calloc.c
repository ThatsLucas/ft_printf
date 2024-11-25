/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:18:26 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:15:25 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory and initializes it to zero.
void	*ft_calloc(size_t size, size_t type)
{
	void	*pointer;

	if (type && size > 2147483647 / type)
		return (NULL);
	pointer = (void *)malloc(size * type);
	if (!pointer)
		return (NULL);
	ft_bzero(pointer, size * type);
	return (pointer);
}
