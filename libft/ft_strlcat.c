#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t dst_len;
    size_t src_len;
    size_t i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    if (dstsize == 0)
        return (src_len + dstsize);
    if (dstsize < dst_len)
    {
        return (dstsize + src_len);
    }
    while (src[i] != '\0' && dst_len + 1 + i < dstsize)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}