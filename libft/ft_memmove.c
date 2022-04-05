#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *dst1;
    unsigned char *src1;
    size_t i;

    if (dst == src)
        return (dst);
    
    dst1 = (unsigned char *)dst;
    src1 = (unsigned char *)src;
    i = 0;

    if (dst1 < src1)
    {
        while (i < len)
        {
            dst1[i] = src1[i];
            i++;
        }
    }
    else
    {
        while (i < len)
        {
            dst1[len - i - 1] = src1[len - i - 1];
            i++;
        }
    }
    return (dst);
}