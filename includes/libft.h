#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>

// put
void ft_putstr_fd(char *c, int fd);
void ft_putchar_fd(char c, int fd);

// maths 
int	ft_factorial(int nb);
int	ft_sqrt(int nb);
int	ft_fibonacci(int index);

#endif