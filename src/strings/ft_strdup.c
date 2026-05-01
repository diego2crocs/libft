#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(src);
	cpy = malloc((len + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, src, len);
	cpy[len] = '\0';
	return (cpy);
}
