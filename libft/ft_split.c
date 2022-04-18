/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:17:00 by sangwoha          #+#    #+#             */
/*   Updated: 2022/04/18 17:15:18 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = 0;
	if (n == 0)
		return (0);
	p = (char *)malloc(sizeof(char) * (n + 1));
	if (!p)
		return (0);
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

size_t	ft_countword(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
				(s[i] == c && s[i + 1] != c && s[i + 1] != '\0'))
				count ++;
		i++;
	}
	return (count);
}

char	**free_all(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	tmp;

	ptr = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!ptr || !s)
		return (0);
	i = 0;
	j = 0;
	while (i < ft_countword(s, c) && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		tmp = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		ptr[i] = ft_strndup(&s[tmp], j - tmp);
		if (ptr[i++] == 0)
			return (free_all(ptr));
	}
	ptr[i] = 0;
	return (ptr);
}
