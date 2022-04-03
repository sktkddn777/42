#include "libft.h"

size_t get_len(int n)
{
  size_t len;
  len = 0;

  if (n == 0)
    return (1);
  if (n < 0)
  {
    len += 1;
    n *= -1;
  }
  while (n > 9)
  {
    n /= 10;
    len += 1;
  }
  return (len);
}

char *ft_itoa(int n)
{
  size_t i;
  size_t length;
  char *p;

  length = get_len(n);
  p = (char *)malloc(sizeof(char) * (length + 1))
  if (!p)
    return (0);
  p[length] = '\0';
  i = 0;
  if (n < 0)
  {
    p[0] = '-';
    i++;
  }
  while (i < length)
  {
    if (n < 0)
      p[length] = '0' + n % 10 * (-1);
    else
      p[length] = '0' + n % 10;
    n /= 10;
    length--;
  }
  return (p);
}