#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *p;
    size_t i;

    p = (char*)s;
    i = 0;
    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}