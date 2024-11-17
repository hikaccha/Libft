/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 09:17:23 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/18 03:08:16 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (format[i] == 'p')
				count += ft_putptr(va_arg(args, unsigned long long));
			else if (format[i] == 'd' || format[i] == 'i')
				count += ft_putnbr(va_arg(args, int));
			else if (format[i] == 'u')
				count += ft_putnbr_unsigned(va_arg(args, unsigned int));
			else if (format[i] == 'x' || format[i] == 'X')
				count += ft_puthex(va_arg(args, unsigned int), format[i]);
			else if (format[i] == '%')
				count += ft_putchar('%');
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
