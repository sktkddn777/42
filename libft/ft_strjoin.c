#include "libft.h"

char* ft_strjoin(char const* s1, char const* s2)
{
  size_t s1_len;
  size_t s2_len;
  char *p;

  s1_len = ft_strlen(s1);
  s2_len = ft_strlen(s2);
  if (!s1 || !s2)
    return (0);
  p = (char*)malloc(sizeof(char) * (s1_len + s2_len + 1));
  if (!p)
    return (0);
  ft_strlcpy(p, s1, s1_len+1);
  ft_strlcat(p, s2, s1_len + s2_len + 1);
  return (p);
}