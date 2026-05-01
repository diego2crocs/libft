#include "libft.h"

int ft_puthex_long(unsigned long c, char format)
{
    int count;
	char *base;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (c >= 16)
		count += ft_puthex_long(c / 16, format);
	count += ft_putchar(base[c % 16]);
	return (count);
}
int ft_putptr(void *ptr)
{
	int count;
	
	count = 0;
	if(!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_puthex_long((unsigned long)ptr, 'x');
	return (count);
}
