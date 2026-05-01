#include "libft.h"

int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	is_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (is_set(s1[i], set))
		i++;
	return (i);
}

int	is_end(const char *s1, const char *set)
{
	int	i;

	i = ft_strlen(s1);
	while (i > 0 && is_set(s1[i - 1], set))
	{
		i--;
	}
	return (i);
}

char	*check(int start, int end)
{
	int		i;
	char	*dst;

	i = 0;
	if (start >= end)
	{
		dst = malloc(1);
		if (!dst)
			return (NULL);
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	int		i;
	int		start;
	int		end;

	i = 0;
	start = is_start(s1, set);
	end = is_end(s1, set);
	dst = check(start, end);
	if (start >= end)
		return (dst);
	dst = malloc((end - start + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (start < end)
	{
		dst[i] = s1[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
