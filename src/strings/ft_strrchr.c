#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		i--;
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}
