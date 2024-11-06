/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 03:27:59 by hichikaw          #+#    #+#             */
/*   Updated: 2024/10/31 03:30:28 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	ft_lstdelone(t_list *lst, void (*dsl)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
