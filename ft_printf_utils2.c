#include "ft_printf.h"

int	ft_printf_unum(unsigned int nb)
{
	int i;

	i = 0;
	if (nb >= 10)
	{
		i += ft_printf_unum(nb / 10);
		i += ft_printf_unum(nb % 10);
	}
	if (nb < 10)
	{
		i += ft_printf_char(nb + 48);
	}
	return (i);
}

int	ft_printf_str(char *str)
{
	int i;
	if (!str)
		str = "(null)";
	while (*str)
	{
		i += write (1, str++, 1);
	}
	return(i);
}