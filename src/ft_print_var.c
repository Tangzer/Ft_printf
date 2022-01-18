#include "../ft_printf.h"

int ft_print_var(char type, va_list args)
{
	int char_count;

	char_count = 0;
	if (type == 'd' || type == 'i')
		char_count = ft_print_int(va_arg(args, int));
	return (char_count);
}