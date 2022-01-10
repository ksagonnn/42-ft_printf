/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:53:12 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/10 15:37:54 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>

int	ft_printf(const char *input, ...)
{
	va_list;
	va_start(args, input);
	char c;

	c = 0;
	if (c != "%")
		write (1, c, 1);
	{
		char d;

	d = 0;
	if (d == '%')
		d++;
	return (d + 1);
		{
			param = (d + 1);
			if (param == 'c', 's', 'p', 'd', 'i', 'u', 'x', 'X', '%')
				return (ft_printf_args(param));
			else if
				return (0);
		}
	}
}

void ft_printf_args(char convert, va_list args, int *rcount)
{
	if (param == 'c')
		return (ft_printf_char(param));
	if (param == 's')
		return (ft_printf_str(param));
	if (param == 'p')
		return (ft_printf_ptr(param));
	if (param == 'd' || param == 'i')
		return (ft_printf_int(param));
	if (param == 'u')
		return (ft_printf_dun(param));
	if (param == 'x' || param == 'X')
		return (ft_printf_hex(param));
}

int ft_printf_char(int c, int *rcount)
{
	return (ft_putchar((c) + 1));
}

int ft_printf_str(char *str, int *rcount)
{
	if (c == NULL)
		return (ft_putstr_fd(NULL));
	else if
		return (ft_putstr_fd(str));
}
int ft_printf_ptr(char *ptr, int *rcount)
int ft_printf_int(int nbr, int *rcount)
{
	if (nbr <= 10 || nbr >= 0)
		return (ft_putnbr_fd(nbr));
}

int ft_printf_dun(unsigned int nbr, int *rcount)
int ft_printf_hex(unsigned long nbr, int *rcount, int format)





//p unsigned long PAREIL






//%p (imprime en hexa un pointeur void*)
static void decToHexa(int n)
{
    {
        // char array to store
        // hexadecimal number
        char[] hexaDeciNum = new char[100];
 
        // counter for hexadecimal number array
        int i = 0;
        while (n != 0) 
		{
            // temporary variable to store remainder
            int temp = 0;
 
            // storing remainder in temp variable
            temp = n % 16;
 
            // check if temp < 10
            if (temp < 10) {
                hexaDeciNum[i] = (char)(temp + 48);
                i++;
            }
            else {
                hexaDeciNum[i] = (char)(temp + 55);
                i++;
            }
 
            n = n / 16;
        }
        // printing hexadecimal number
        // array in reverse order
        for (int j = i - 1; j >= 0; j--)
            Console.Write(hexaDeciNum[j]);
    }
    // Driver Code
    public static void Main(String[] args)
    {
        int n = 2545;
        decToHexa(n);
    }
}
