/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:19:38 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/12 17:19:31 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;

	i = 0;
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (i < n && src1[i] != '\0')
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	if (i < n && src1[i] == '\0')
		return (src1[i] - src2[i]);
	return (0);
}
