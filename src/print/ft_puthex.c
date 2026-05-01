#include "libft.h"

int ft_puthex(unsigned int c, char format)
{
	int count;
	char *base;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (c >= 16)
		count += ft_puthex(c / 16, format);
	count += ft_putchar(base[c % 16]);
	return (count);
}