#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  char *p;
  size_t i;
  size_t size;

  if (!s1 || !set)
    return (0);
  i = 0;
  size = ft_strlen(s1);
  while (s1[i] && ft_strchr(set, s1[i]))
    i++;
  while (s1[size - 1] && ft_strchr(set, s1[size-1]) && size > i)
    size--;
  p = (char*)malloc(sizeof(char) * (size - i + 1));
  if (!p)
    return (0);
  ft_strlcpy(p, &s1[i], size - i + 1);
  return (p);
}