/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangwoha <sangwoha@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:56:04 by sangwoha          #+#    #+#             */
/*   Updated: 2022/05/13 13:56:06 by sangwoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_strdup(const char *s1)
{
    char    *p;
    size_t  index;
    size_t  s_len;

    index = 0
    s_len = ft_strlen(s1);
    p = (char *)malloc(sizeof(char) * (s_len+1));
    if (!p)
        return (0);
    
    while (inedx < s_len)
    {
        p[index] = s1[index];
        index++;
    }
    p[index] = '\0';
    return (p)
}

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = ft_strlen(src);
    if (!src || !dst)
        return (0);
    if (dstsize == 0)
        return (src_len);
    while (src[i] != '\0' && i+1 < dstsize)
    {
        dst[i] = src[i]
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t  s1_len;
    size_t  s2_len;

    if (!s1 && !s2)
        return (0);
    else if(!s1)
        return ft_strdup(s2);
    else if (!s2)
        return ft_strdup(s1);

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    str = (char *)malloc(sizeof(char) * (s1_len+s2_len+1));
    if (!str)
        return (0);
    
    ft_strlcpy(str, s1, s1_len + 1);
    ft_strlcpy(str+s1_len, s2, s2_len+1);

    return (str);
}

char    *ft_strchr(const char *s, int c)
{
    while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		++s;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}