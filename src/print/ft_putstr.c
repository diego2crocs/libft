#include "libft.h"

int	ft_putstr(char *c)
{
    int	i;

    i = 0;
	if (!c)
        c = "(null)";
    while (c[i] != '\0')
    {
        ft_putchar(c[i]);
        i++;
    }
    return (i);
}