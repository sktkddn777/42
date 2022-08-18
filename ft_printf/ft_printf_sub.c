/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sub.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:03:41 by sangwoha          #+#    #+#             */
/*   Updated: 2022/08/18 12:04:02 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	recursive_nbr(int n)
{
	char	tmp;
	int		len;

	len = 0;
	if (n >= 10)
		len += recursive_nbr(n / 10);
	tmp = '0' + n % 10;
	len += write(1, &tmp, 1);
	return (len);
}

int	recursive_unsigned_nbr(unsigned int n)
{
	char				tmp;
	unsigned int		len;

	len = 0;
	if (n >= 10)
		len += recursive_unsigned_nbr(n / 10);
	tmp = '0' + n % 10;
	len += write(1, &tmp, 1);
	return (len);
}
