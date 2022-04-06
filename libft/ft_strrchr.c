#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    char * last;

    last = (char *)s;
    i = ft_strlen(s);

    while (i >= 0)
    {
        if (last[i] == (char)c)
            return (last + i);
        i--;
    }
    return (0);
}