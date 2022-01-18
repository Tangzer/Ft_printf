#include "../ft_printf.h"

int ft_print_var(char type, va_list args)
{
	int char_count;

	char_count = 0;
	if (type == 'd' || type == 'i')
		char_count = ft_print_int(va_arg(args, int));
	if (type == 'c')
		char_count = ft_print_char(va_arg(args, int));
	if (type == 's')
		char_count = ft_print_string(va_arg(args, char *));
//	if (type == '%')
//		char_count = ft_print_pourcent();
	if (type == 'x' || type == 'X')
		char_count = ft_print_hexa(va_arg(args, unsigned int), type);
	return (char_count);
}