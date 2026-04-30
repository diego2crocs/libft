#include "libft.h"

int	ft_sqrt(int nb)
{
	int result;

	result = 1;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (result * result <= nb)
	{
		if (result * result == nb)
		{
			return (result);
		}
		++result;
	}
	return (0);
}