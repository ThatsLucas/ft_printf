/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:29:29 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/23 23:01:05 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long *nbr)
{
	size_t	i;
	long	temp;

	if (*nbr < 0)
		*nbr = -*nbr;
	temp = *nbr;
	i = 0;
	if (*nbr < 10)
		return (1);
	while (temp > 0)
	{
		temp /= 10;
		i++;
	}
	return (i);
}

// Converts an integer to a string.
char	*ft_itoa(int n)
{
	long	i;
	long	nbr;
	char	*str;

	nbr = n;
	i = intlen(&nbr);
	if (n < 0)
		i++;
	str = (char *)malloc((i + 1) * (sizeof(char)));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = '0';
	str[i] = '\0';
	i--;
	while (nbr > 0 && i >= 0)
	{
		str[i] = nbr % 10 + 48;
		nbr /= 10;
		i--;
	}
	if (n < 0)
		str[i] = '-';
	return (str);
}
