#include "ft_printf.h"

int	ft_printf_args(va_list *args, char c)
{
	int i;
	i = 0;
	if (c == 'c')
		i += ft_printf_char(va_arg(*args, int));
	if (c == 's')
		i += ft_printf_str(va_arg(*args, char *));
	if (c == '%')
		i += write(1, "%", 1);
	if (c == 'i' || c == 'd')
		i += ft_printf_num(va_arg(*args, int));
	if (c == 'x')
		i += ft_printf_hex(va_arg(*args, unsigned int), 1);
	if (c == 'X')
		i += ft_printf_hex(va_arg(*args, unsigned int), 2);
	if (c == 'p')
		{
			i += write(1, "0x", 2);
			i += ft_printf_ptr(va_arg(*args, unsigned long int));
		}
	if (c == 'u')
		i += ft_printf_unum(va_arg(*args, unsigned int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int i;
	int stock;

	i = 0;
	stock = 0;
	va_list args;
	va_start(args, str);
	
	while (str[i])
	{
		if (str[i] != '%')
			stock += write (1, &str[i], 1);
		if (str[i] == '%')
		{
			stock += ft_printf_args(&args, str[i + 1]);
			i++;
		}
		i++;
	}
	va_end(args);
	return (stock);
}