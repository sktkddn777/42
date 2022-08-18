/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:03:47 by sangwoha          #+#    #+#             */
/*   Updated: 2022/08/18 12:05:08 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	int		len;

	len = write(1, &c, 1);
	return (len);
}

int	print_str(char *str)
{
	int		len;

	if (!str)
		len = write(1, "(null)", 6);
	else
		len = write(1, str, ft_strlen(str));
	return (len);
}

int	print_nbr(int num)
{
	int		len;

	len = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		num *= -1;
		len += write(1, "-", 1);
	}
	return (recursive_nbr(num) + len);
}

int	print_ui(unsigned int num)
{
	return (recursive_unsigned_nbr(num));
}

int	print_hex(unsigned long long num, int upper)
{
	int			len;
	static char	*lower_base = "0123456789abcdef";
	static char	*upper_base = "0123456789ABCDEF";

	len = 0;
	if (num < 16)
	{
		if (upper)
			len += print_char(upper_base[num]);
		else
			len += print_char(lower_base[num]);
	}
	else
	{
		len += print_hex(num / 16, upper);
		len += print_hex(num % 16, upper);
	}	
	return (len);
}
