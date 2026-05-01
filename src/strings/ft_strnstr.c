#include "libft.h"

static int	match_at(const char *big, const char *little,
	size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (little[i] != '\0')
	{
		if (start + i >= len)
			return (0);
		if (big[start + i] != little[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	if (!big)
		return (NULL);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (match_at(big, little, i, len))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
