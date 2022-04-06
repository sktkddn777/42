#include "libft.h"

size_t ft_countword(char const *s, char c)
{
	size_t count;
	size_t i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
		{
			if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
				count ++;
		}
		i++;
	}
	return (count);
}

size_t get_word_len(char const *s, char c)
{
	size_t len;
	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}
size_t execute_split(char **ptr, char const*s, char c)
{
	size_t i;
	size_t p_idx;
	size_t w_len;

	i = 0;
	p_idx = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i])
	{
		w_len = get_word_len(&s[i], c);
		ptr[p_idx] = (char *)malloc(sizeof(char) * (w_len + 1));
		if (!ptr[p_idx])
			return (0);
		ft_strlcpy(ptr[p_idx], &s[i], w_len + 1);
		i += w_len;
		while (s[i] != '\0' && s[i] == c)
			i++;
		p_idx++;
	}
	ptr[p_idx] = 0;
	return (1);
}

void free_all(char **ptr)
{
	size_t i;
	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
}

char **ft_split(char const *s, char c)
{
	char **ptr;
	ptr = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!ptr || !s)
		return (0);
	
	if (!execute_split(ptr, s, c))
	{
		free_all(ptr);
		return (0);
	}
	return (ptr);
}