#include "libft.h"

    char    *ft_strdup(const char *s)
    {
        int i;
        int len;
        char *new_s;

        i = 0;
        len = 0;
        while (s[len])
            len++;
        new_s = (char *)malloc(sizeof(char) * (len + 1));
        if (!(new_s))
            return (NULL);
        while (s[i])
        {
            new_s[i] = s[i];
            i++;
        }
        new_s[i] = '\0';
        return (new_s);
    }