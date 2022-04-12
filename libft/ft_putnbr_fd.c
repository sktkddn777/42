/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:16:43 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/12 17:33:35 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putnbr_fd(n / 10, fd);
			write(fd, "8", 1);
			return ;
		}
		else
		{
			write(fd, "-", 1);
			n *= -1;
		}
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		str = n % 10 + '0';
	}
	else
		str = n + '0';
	write(fd, &str, 1);
}
