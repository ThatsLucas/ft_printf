/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:11:29 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:06:47 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts a string to lowercase.
int	ft_tolower(int character)
{
	if (character >= 65 && character <= 90)
		return ((unsigned char)(character + 32));
	return (character);
}
