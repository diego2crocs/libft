#include "libft.h"

int	ft_lcm(int a, int b)
{
	int	gcd;
 
	if (a == 0 || b == 0)
		return (0);
	a = ft_abs(a);
	b = ft_abs(b);
	gcd = ft_gcd(a, b);
	return ((a / gcd) * b);
}