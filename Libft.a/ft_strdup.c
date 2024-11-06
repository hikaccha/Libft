/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:05:43 by hichikaw          #+#    #+#             */
/*   Updated: 2024/10/30 21:59:58 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	return (dest, stc);
}

char	ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = strlen(s);
	dup = (char *)malloc(len);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}
