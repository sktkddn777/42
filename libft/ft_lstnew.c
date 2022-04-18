/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:14:41 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/18 17:29:10 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_lst;

	n_lst = (t_list *)malloc(sizeof(t_list));
	if (!n_lst)
		return (0);
	n_lst->content = content;
	n_lst->next = 0;
	return (n_lst);
}
