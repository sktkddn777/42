/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:03:31 by sangwoha          #+#    #+#             */
/*   Updated: 2022/08/18 12:03:59 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	parse_format(const char type, va_list ap)
{
	int	len;

	if (type == 'c')
		len = print_char((char)va_arg(ap, int));
	else if (type == 's')
		len = print_str((char *)va_arg(ap, char *));
	else if (type == 'p')
	{
		len = write(1, "0x", 2);
		len += print_hex((unsigned long long)va_arg(ap, void *), 0);
	}
	else if (type == 'd' || type == 'i')
		len = print_nbr((int)va_arg(ap, int));
	else if (type == 'u')
		len = print_ui((unsigned int)va_arg(ap, int));
	else if (type == 'x')
		len = print_hex((unsigned int)va_arg(ap, int), 0);
	else if (type == 'X')
		len = print_hex((unsigned int)va_arg(ap, int), 1);
	else if (type == '%')
		len = write(1, "%", 1);
	else
		len = write(1, &type, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += parse_format(*format, ap);
		}
		else
		{
			write(1, format, 1);
			len++;
		}
		if (*format)
			format++;
	}
	va_end(ap);
	return (len);
}
