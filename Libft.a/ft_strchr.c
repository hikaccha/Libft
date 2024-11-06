/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:16:23 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/06 15:25:18 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	target;

	target = (char)c;
	while (*s != '\0')
	{
		if (*s == target)
			return ((char *)s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (NULL);
}

//#include <stdio.h>
//
//int    main(void)
//{
//    char    test[20] = "abcdefghijk";
//    char    *p;
//
//    p = ft_strchr(test, '\0');
//    printf("検索文字が見つかった場所から表示→%s\n", p);
//    return (0);
//}
