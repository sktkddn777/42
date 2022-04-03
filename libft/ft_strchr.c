#include "libft.h"

char* ft_strchr(const char* s, int c)
{
	char find;
	int i;

	find = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			return ((char*)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char*)s + i);
	return (0);
}