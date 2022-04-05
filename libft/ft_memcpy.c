#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *dst1;
    unsigned char *src1;
    size_t i;

    i = 0;
    dst1 = (unsigned char*)dst;
    src1 = (unsigned char*)src;
    if (dst1 == src1)
        return (dst1);
    while (i < n)
    {
        dst1[i] = src1[i];
        i++;
    }
    return (dst);
}