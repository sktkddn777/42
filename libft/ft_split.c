#include "libft.h"

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	w_count;

	i = 0;
	w_count = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i + 1], charset))
			if (!check_sep(str[i], charset))
				w_count++;
		i++;
	}
	return (w_count);
}

void	insert_word(char *one_dp, char *str, char *charset)
{
	int	i;

	i = 0;
	while (!check_sep(str[i], charset))
	{
		one_dp[i] = str[i];
		i++;
	}
	one_dp[i] = '\0';
}

size_t	execute_split(char **p, char *str, char *charset)
{
	size_t	i;
	int	w_len;
	int	p_idx;

	i = 0;
	p_idx = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset))
			i++;
		else
		{
			w_len = 0;
			while (!check_sep(str[i + w_len], charset))
				w_len++;
			p[p_idx] = (char *)malloc(sizeof(char) * (w_len + 1));
      if (!p[p_idx])
        return (0);
			insert_word(p[p_idx], str + i, charset);
			p_idx++;
			i += w_len;
		}
	}
  return (1);
}

void free_malloc(char **p)
{
  size_t i;

  i = 0;
  while (p[i])
    free(p[i++]);
  free(p);
}
char **ft_split(char const *s, char c)
{
  char	**p;
	int		w_count;

	w_count = count_word(s, c);
	p = (char **)malloc(sizeof(char *) * (w_count + 1));
	if (!p)
		return (0);
	p[w_count] = 0;
	if (!execute_split(p, s, c))
  {
    free_malloc(p);
    return (0);
  }
	return (p);
}