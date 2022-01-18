#include "../ft_printf.h"

static int	hexa_len(unsigned int nb)
{
	int i;

	i = 0;
	while (nb >= 16)
	{
		hexa_len(nb = (nb / 16));
		i++;
	}
	i++;
	return (i);
}

static void ft_hexa(unsigned int nb, char type)
{
	if (nb >= 16)
	{
		ft_print_hexa((nb / 16), type);
		ft_print_hexa((nb % 16), type);
	}
	else
	{
		if (nb < 9)
			ft_putchar_fd((nb + '0'), 1);
		else if (type == 'x')
			ft_putchar_fd((nb - 10 + 'a'), 1);
		else if (type == 'X')
			ft_putchar_fd((nb - 10 + 'A'), 1);
	}
}

int ft_print_hexa(unsigned int nb, char type)
{
	int char_count;

	ft_hexa(nb, type);
	char_count = hexa_len(nb);
	return (char_count);
}