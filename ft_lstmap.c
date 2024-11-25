/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 06:34:04 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/22 13:16:24 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*clear_and_return_null(t_list **new_list, void (*del)(void *))
{
	ft_lstclear(new_list, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*last;

	new_list = NULL;
	last = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
			return (clear_and_return_null(&new_list, del));
		if (!new_list)
		{
			new_list = new_node;
			last = new_list;
		}
		else
		{
			last->next = new_node;
			last = new_node;
		}
		lst = lst->next;
	}
	return (new_list);
}
