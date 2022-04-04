#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
  char str;
  if (n < 0)
  {
    if (n == -2147483648)
      {
        ft_putnbr_fd(n / 10, fd);
        write(fd, "-2147483648", 12);
        return ;
      }
    else
    {
      write(fd, "-", 1);
      n *= -1;
    }
  }
  if (n > 9)
    {
      ft_putnbr_fd(n/10, fd);
      str = n % 10 + '0';
    }
  else
    str = n + '0';

  write(fd, &str, 1);
}