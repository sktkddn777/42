#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char* src1;
    unsigned char* src2;
    size_t i;

    i = 0;
    src1 = (unsigned char*)s1;
    src2 = (unsigned char*)s2;
    while (i < n && src1[i] != '\0' && src2[i] != '\0' && src1[i] == src2[i])
        i++;
    if (i == n)
        return (0);
    return (src1[i] = src2[i]);
}