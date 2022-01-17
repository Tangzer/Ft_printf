#include "../includes/ft_printf.h"

int	ft_type_list(char c)
{
	if (c == 'd' || c == 'i' || c == 'u' || c == 'p' || c == 'x'
		|| c == 'X' || c == 'c' || c == 's' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_putchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}