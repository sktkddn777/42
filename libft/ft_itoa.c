/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:13:18 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/12 17:31:54 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len ++;
	while (n)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	length;
	char	*p;

	length = get_len(n);
	p = (char *)malloc(sizeof(char) * (length + 1));
	if (!p)
		return (0);
	p[length] = '\0';
	i = 0;
	if (n < 0)
	{
		p[0] = '-';
		i++;
	}
	while (i < length--)
	{
		if (n < 0)
			p[length] = '0' + n % 10 * (-1);
		else
			p[length] = '0' + n % 10;
		n /= 10;
	}
	return (p);
}
