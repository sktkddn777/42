/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:15:58 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/12 15:12:36 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	if (dst == NULL || src == NULL)
		return (0);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = -1;
	if (dst1 < src1)
		while (++i < len)
			dst1[i] = src1[i];
	else
		while (++i < len)
			dst1[len - i - 1] = src1[len - i - 1];
	return (dst);
}
