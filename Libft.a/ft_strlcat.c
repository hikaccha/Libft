/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:20:40 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/06 05:06:46 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] != '\0' && len_dst < size)
		dst_len++;
	while (src[len_src] != '\0')
		len_src++;
	while (size <= len_dst)
		return (size + len_src);
	while (src[i] != '\0' && (len_dst + i) < (size - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
