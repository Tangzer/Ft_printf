#include "../ft_printf.h"

static int 	ft_input_reader(va_list args, const char *input)
{
	int i;
	int char_count;

	i = 0;
	char_count = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
		{
			if (ft_input_type(input[i + 1]))
				char_count += ft_print_var(input[i + 1], args);
			else if (input[i + 1])
				char_count += ft_putchar(input[i + 1]);
			i++;
		}
		else if (input[i] != '%')
			char_count += ft_putchar(input[i]);
		i++;
	}
	return (char_count);
}

int	ft_printf(const char *input, ...)
{
	va_list	ptr;
	int		char_count;

	char_count = 0;
	va_start(ptr, input);
	char_count += ft_input_reader(ptr, input);
	va_end(ptr);
	return (char_count);
}

#include <stdio.h>
int main(void)
{
	int c;
	int d;
	char *ptr;

	ptr = 0;
	c = 237;
	d = ft_printf("OG : %d %i %c %s %x %X %u %p", c, c, 'T', "salut", 450, 237, 303, ptr);
	printf("\nReal one: %d %i %c %s %x %X %u %p", c, c, 'T', "salut", 450, 237, 303, ptr);
	printf("\nvaleur de d : %d", d);
	return (d);
}