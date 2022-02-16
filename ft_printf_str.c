/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:46:31 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/20 12:06:56 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_str(char *str, int *rcount)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		*rcount += ft_strlen("(null)");
	}
	else if
	{
		ft_putstr_fd(str, 1);
		*rcount += ft_strlen(str);
	}
	return (*rcount);
}
