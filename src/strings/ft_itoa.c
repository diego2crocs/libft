#include "libft.h"

int	count_digits(long n)
{
	int	i;

	if (n < 0)
		n = -n;
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*condi(int *len, long *nb, char *res)
{
	if (*nb == 0)
	{
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (*nb < 0)
	{
		*nb = -*nb;
		res[*len + 1] = '\0';
		res[0] = '-';
		*len += 1;
	}
	return (NULL);
}

char	*ft_malloc(int len, long nb)
{
	if (nb < 0)
		return (malloc((len + 2) * sizeof(char)));
	else if (nb == 0)
		return (malloc(2 * sizeof(char)));
	return (malloc((len + 1) * sizeof(char)));
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*res;
	char	*tmp;

	nb = n;
	len = count_digits(nb);
	res = ft_malloc(len, nb);
	if (!res)
		return (NULL);
	res[len] = '\0';
	tmp = condi(&len, &nb, res);
	if (tmp)
		return (tmp);
	while (nb > 0)
	{
		len--;
		res[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}
