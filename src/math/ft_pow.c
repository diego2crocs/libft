#include "libft.h"

int	ft_pow(int base, int exp)
{
	int	result;
 
	if (exp < 0)
		return (0);
	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}