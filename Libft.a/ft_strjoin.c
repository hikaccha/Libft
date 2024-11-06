/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 20:11:08 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/06 18:23:10 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_all_len(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;

	s1_len = 0;
	s2_len = 0;
	while (s1[s1_len])
		s1_len++;
	while (s2[s2_len])
		s2_len++;
	return (s1_len + s2_len + 1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	joined_str = (char *)malloc(sizeof(char) * (ft_all_len(*s1, *s2)));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		joined_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (*s2)
	{
		joined_str[i + j] = s2[j];
		j++;
	}
	joined_str[i + j] = '\0';
	return (joined_str);
}		
