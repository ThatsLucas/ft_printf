/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:20:03 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:27:32 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts a string to uppercase.
int	ft_toupper(int character)
{
	if (character >= 97 && character <= 122)
		return ((unsigned char)(character - 32));
	return (character);
}
