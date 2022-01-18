#include "../ft_printf.h"

int ft_print_string(char *str)
{
	int char_count;

	char_count = 0;
//	if (!str)
//		str = "(null)";
	char_count = ft_putstr_and_count(str);
	return (char_count);
}