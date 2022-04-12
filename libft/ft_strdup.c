/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:17:50 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/12 14:22:00 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	size_t		i;
	size_t		s1_len;
	char		*new;

	i = 0;
	s1_len = ft_strlen(s1);
	new = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (!new)
		return (0);
	while (i < s1_len)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
