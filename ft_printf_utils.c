#include "ft_printf.h"

int	ft_printf_char(char c)
{
	int i;
	i = write(1, &c, 1);
	return (i);
}

int	ft_printf_num(int nb)
{
	long long n;
	int i;

	n = nb;
	i = 0;
	if (n < 0)
	{
		i += write (1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		i += ft_printf_num(n / 10);
		i += ft_printf_num(n % 10);
	}
	if (n < 10)
	{
		i += ft_printf_char(n + 48);
	}
	return (i);
}

int	ft_printf_hex(unsigned int nb, int maj)
{
	int i;
	i = 0;
	if (nb >= 16)
	{
		i += ft_printf_hex(nb / 16, maj);
		i += ft_printf_hex(nb % 16, maj);
	}
	if (nb < 16)
	{
		if (nb < 10)
			i += ft_printf_char(nb + 48);
		else 
		{
			if (maj == 1)
				i += ft_printf_char(nb + 87);
			else
				i += ft_printf_char(nb + 55);
		}
	}
	return (i);
}

int	ft_printf_ptr(unsigned long int nb)
{
	int i;
	i = 0;
	if (nb >= 16)
	{
		i += ft_printf_ptr(nb / 16);
		i += ft_printf_ptr(nb % 16);
	}
	if (nb < 16)
	{
		if (nb < 10)
			i += ft_printf_char(nb + 48);
		else
			i += ft_printf_char(nb + 87);
	}
	return (i);
}