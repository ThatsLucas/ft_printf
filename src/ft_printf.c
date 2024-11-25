/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-duc <lle-duc@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:28:31 by lle-duc           #+#    #+#             */
/*   Updated: 2024/11/25 17:00:07 by lle-duc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static void	ft_count_returned(long long pointer, char *base, int *c_cnt,
		int is_adress)
{
	long long	nbr;

	nbr = pointer;
	if (is_adress)
	{
		if (!nbr)
		{
			write(1, "(nil)", 5);
			*c_cnt += 5;
			return ;
		}
		write(1, "0x", 2);
		*c_cnt += 2;
	}
	ft_putnbr_base(nbr, base, c_cnt);
}

int	ft_check_type(char c, va_list params, int *c_cnt)
{
	char	*s;

	if (c == 's')
	{
		s = va_arg(params, char *);
		if (!s)
			return (write(1, "(null)", 6), 6);
		return (ft_putstr_fd(s, 1), ft_strlen(s));
	}
	else if (c == 'c')
		ft_putchar_fd(va_arg(params, int), 1);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	else if (c == 'p')
		return (ft_count_returned(va_arg(params, unsigned long long),
				"0123456789abcdef", c_cnt, 1), 0);
	else if (c == 'X')
		return (ft_count_returned(va_arg(params, unsigned int),
				"0123456789ABCDEF", c_cnt, 0), 0);
	return (1);
}

int	ft_check_type_base(char c, va_list params, int *c_cnt)
{
	long	i;

	if (c == 'd' || c == 'i')
	{
		i = va_arg(params, int);
		if (i < 0)
		{
			*c_cnt += 1;
			write(1, "-", 1);
			return (ft_count_returned((unsigned long)(i * -1), "0123456789",
				c_cnt, 0), 0);
		}
		return (ft_count_returned(i, "0123456789", c_cnt, 0), 0);
	}
	else if (c == 'u')
		return (ft_count_returned(va_arg(params, unsigned int), "0123456789",
				c_cnt, 0), 0);
	else if (c == 'x')
		return (ft_count_returned(va_arg(params, unsigned int),
				"0123456789abcdef", c_cnt, 0), 0);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int		c_cnt;
	va_list	params;

	va_start(params, format);
	c_cnt = 0;
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format != '%')
			ft_putchar_fd(*format, 1);
		else
		{
			if (ft_strchr("diux", *(format + 1)))
				c_cnt += ft_check_type_base(*(format + 1), params, &c_cnt);
			else
				c_cnt += ft_check_type(*(format + 1), params, &c_cnt);
			format += 2;
			continue ;
		}
		c_cnt++;
		format++;
	}
	va_end(params);
	return (c_cnt);
}
