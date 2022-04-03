#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t i;
  size_t j;
  char *p;

  if (!s)
    return (0);
  p = (char*)malloc(sizeof(char) * (len + 1))
  if (!p)
    return (0);

  i = 0;
  j = 0;
  while (s[i])
  {
    if (i >= start && j < len)
    {
      p[j] = p[i]
      j++;
    }
    i++;
  }
  p[j] = '\0';
  return (p);
}