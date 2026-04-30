#include "libft.h"

void ft_putstr_fd(char *c, int fd)
{
	int i = 0;

	while (c[i])
	{
		ft_putchar_fd(c[i]);
		i++;
	}
	c[i] = '\0';
}