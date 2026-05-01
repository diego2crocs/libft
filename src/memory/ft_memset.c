#include "libft.h"

void	*ft_memset(void *s, int value, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)value;
	return (s);
}
