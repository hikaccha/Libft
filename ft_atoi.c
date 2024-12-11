/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:03:55 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/30 01:14:41 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_handle_overflow(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f'
		|| nptr[i] == '\r')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (result > (LONG_MAX - (nptr[i] - '0')) / 10)
			return (ft_handle_overflow(sign));
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	char    *nptr = "9223372036854775806";
//        char    *nptr2 = "-9223372036854775806";
//
//	char	*nptr3 = "9223372036854775807";
//	char	*nptr4 = "-9223372036854775807";
//
//	char    *nptr5 = "9223372036854775808";
//        char    *nptr6 = "-9223372036854775808";
//
//	char	*nptr7 = "9223372036854775809";
//	char	*nptr8 = "9223372036854775809";
//
//	printf("LONG_MAX: %ld\n", LONG_MAX);   //出力:9223372036854775807
//
//	printf("%d \n", ft_atoi(nptr));
//	printf("%d \n", atoi(nptr));
//
//	printf("%d \n", ft_atoi(nptr2));
//	printf("%d \n", atoi(nptr2));
//
//	printf("%d \n", ft_atoi(nptr3));
//        printf("%d \n", atoi(nptr3));
//
//	printf("%d \n", ft_atoi(nptr4));
//        printf("%d \n", atoi(nptr4));
//
//	printf("%d \n", ft_atoi(nptr5));
//        printf("%d \n", atoi(nptr5));
//
//	printf("%d \n", ft_atoi(nptr6));
//        printf("%d \n", atoi(nptr6));
//
//	printf("%d \n", ft_atoi(nptr7)); 
//	printf("%d \n", atoi(nptr7));
//
//        printf("%d \n", ft_atoi(nptr8)); 
//        printf("%d \n", atoi(nptr8));
//
//	return (0);
//}
