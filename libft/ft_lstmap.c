/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:14:30 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/18 17:11:22 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_lst;
	t_list	*new_node;

	node = lst;
	new_lst = NULL;
	while (node)
	{
		new_node = ft_lstnew(f(node->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&new_lst, new_node);
		node = node->next;
	}
	new_node = NULL;
	return (new_lst);
}
