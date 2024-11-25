/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:08:56 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:01:33 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c == ' ') || (c == '\n') || (c == '\t') || (c == '\v')
		|| (c == '\f') || (c == '\r'));
}

// Converts a string to an integer.
int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		negative;

	i = -1;
	negative = 1;
	while (str[++i] && ft_isspace(str[i]))
		;
	if (str[i] == 45)
	{
		negative *= -1;
		i++;
	}
	if (str[i] == 43)
	{
		if (i > 0 && !ft_isspace(str[i - 1]))
			return (0);
		else
			i++;
	}
	nbr = 0;
	while (str[i] >= 48 && str[i] <= 57)
		nbr = nbr * 10 + str[i++] % 12;
	return (nbr * negative);
}
