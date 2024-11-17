/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 03:14:42 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/18 03:14:44 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n, char format)
{
	int		count;
	char	*hex;

	count = 0;
	if (format == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex(n / 16, format);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	ft_putptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	if (ptr == 0)
		return (count + ft_putchar('0'));
	count += ft_puthex(ptr, 'x');
	return (count);
}
