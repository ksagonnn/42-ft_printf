/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <ksagon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:53:12 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/19 13:57:28 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h
"
char	detect_arg(const char *str, int i)
{
		if (str[i] == '%' && (str[i + 1] == 'c' || str[i] == 's' 
		|| str[i] == 'p' || str[i] == 'd' || str[i] == 'i' 
		|| str[i] == 'u' || str[i] == 'x' || str[i] == 'X' 
		|| str[i] == '%'))
	return (str[i + 1]);
return (0);
}

int	ft_printf(const char *input, ...)

int ft_printf_args(char convert, va_list args)
{
	int i;

	i = 0;
	if (convert == 'c')
		i = ft_printf_char(va_arg(args, char);
	else if (convert == 's')
		i = ft_putstr_fd(va_arg(args, int),1);
	else if (convert == 'p')
		i = ft_printf_ptr(va_arg(args, unsigned long));
	else if (convert == 'd' || convert == 'i')
		i = ft_printf_int(va_arg(args, int));
	else if (convert == 'u')
		i = ft_printf_dun(va_arg(args, unsigned int));
	else if (convert == 'x' || convert == 'X')
		i = ft_printf_hex(va_arg(args, unsigned long));
	else if (convert == '%')
		i = ft_printf_percent('%');
}
