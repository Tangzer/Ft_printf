#include "../ft_printf.h"
#include <stdio.h>

static int ft_len(unsigned int nb)
{
	int i;

	i = 0;
	if (nb >= 10)
	{
		nb = (nb / 10);
		i++;
	}
	return (++i);
}

static void	ft_print(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_print_unsigned_int(nb / 10);
		ft_print_unsigned_int(nb % 10);
	}
	else
		ft_putchar_fd((nb + '0'), 1);
}

int	ft_print_unsigned_int(unsigned int nb)
{
	int char_count;

	ft_print(nb);
	char_count = ft_len(nb);
	printf("3 =?= %d", char_count);
	return (char_count);
}