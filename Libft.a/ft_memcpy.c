/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 03:49:14 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/06 07:40:34 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_c;
	const unsigned char	*src_c;

	dest_c = (unsigned char *)dest;
	src_c = (const unsigned char *)src;
	if (dest == NULL src == NULL)
		return (NULL);
	while (0 < n)
	{
		*dest_c++ = *src_c++;
		n--;
	}
	return (dest);
}
