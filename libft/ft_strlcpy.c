#include "libft.h"

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t src_len;

    i = 0;
    src_len = ft_strlen(src);

    if (dstsize == 0)
        return (src_len);
    while (src[i] != '\0' && i < dstsize - 1)
    {
        dst[i] = src[i];
        i+=1;
    }
    dst[i] = '\0';
    return (src_len);
}