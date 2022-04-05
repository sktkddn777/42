#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *s1;
    size_t i;

    i = 0;
    s1 = (unsigned char *)s;
    while (i < n)
    {
        if (s1[i] == (unsigned char)c)
            return (s1 + i);
    }
    return (0);
}