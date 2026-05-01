#include "libft.h"

int	ft_gcd(int a, int b)
{
	int	tmp;
 
	a = ft_abs(a);
	b = ft_abs(b);
	while (b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}
 