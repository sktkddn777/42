#include "libft.h"

int ft_atoi(const char *str)
{
    int ans;
    int	minus;

    minus = 1;
    ans = 0;
    while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
    if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
    while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
    return (ans * minus);
}