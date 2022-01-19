#include "../ft_printf.h"

static int ft_print_ptr(unsigned long long int ptr)
{
	int char_count;

	char_count = 0;
	if (ptr >= 16)
	{
		ft_print_ptr(ptr / 16);
		ft_print_ptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
		{
			ft_putchar_fd((ptr + '0'), 1);
			char_count++;
		}
		else
		{
			ft_putchar_fd(ptr - 10 + 'a', 1);
			char_count++;
		}
	}
	return (char_count);
}

int ft_print_pointer(unsigned long long int ptr)
{
	int char_count;

	char_count = 2;
	write(1, "0x", 2);
//	if (ptr == '0')
//	{
//		char_count += write(1, "0", 1);
//		printf("\nthis is supposed to be = 3 --=> %d", char_count);
//		return (char_count);
//	}
//	else
		char_count += ft_print_ptr(ptr);
	return (char_count);
}