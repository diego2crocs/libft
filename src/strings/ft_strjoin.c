#include "libft.h"

static void	copy_str(char *dest, char const *src, int *i)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[*i] = src[j];
		j++;
		(*i)++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	ls1;
	size_t	ls2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	res = malloc((ls1 + ls2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	copy_str(res, s1, &i);
	copy_str(res, s2, &i);
	res[i] = '\0';
	return (res);
}
