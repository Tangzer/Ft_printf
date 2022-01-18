#include "../ft_printf.h"

int ft_print_int(int nbr)
{
	char	*str;
	int		char_count;

	char_count = 0;
	str = ft_itoa(nbr);
	char_count = ft_putstr_and_count(str);
	if (str)
		free(str);
	return (char_count);
}