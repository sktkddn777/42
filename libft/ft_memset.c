#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    unsigned char *dest;

    dest = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        dest[i] = (unsigned char)c;
        i++;
    }
    return (dest);
}