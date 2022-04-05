#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char* a;
    unsigned char* b;

    a = (unsigned char *)s1;
    b = (unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if (a[i] != b[i])
            return (a[i] - b[i]);
        i++;
    }
    return (0);
}