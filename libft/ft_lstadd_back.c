/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:13:41 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/18 16:26:49 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst2;

	if (*lst == 0)
		*lst = new;
	else
	{
		lst2 = *lst;
		while (lst2->next)
			lst2 = lst2->next;
		lst2->next = new;
	}
}
