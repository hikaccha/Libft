/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 06:22:51 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/06 15:34:54 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'));
}

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)));
}
