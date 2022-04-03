#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  size_t i;
  size_t s_len;
  char *p;

  i = 0;
  if (!s || !f)
    return (0);
  
  s_len = ft_strlen(s);
  p = (char *)malloc(sizeof(char) * (s_len + 1));
  if (!p)
    return (0);
  while (i < s_len)
  {
    p[i] = f(i, s[i]);
    i++;
  }
  p[i] = '\0';
  return (p);
}