#include "libft.h"

int transform(char c, va_list args)
{
	if(c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if(c == '%')
		return (ft_putchar('%'));
	if(c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if(c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if(c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if(c == 'x' || c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), c));
	if(c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int count;
	int i;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			count += transform(format[i + 1], args);
			i += 2;
		}
		else
			count += ft_putchar(format[i++]);
	}
	va_end(args);
	return (count);
}

