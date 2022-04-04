#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char* ft_strchr(const char* s, int c);
char    *ft_strdup(const char *s);