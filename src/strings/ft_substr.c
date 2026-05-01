#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	if (start > ft_strlen(s))
	{
		dst[i] = '\0';
		return (dst);
	}
	while (i < len)
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
