/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:33:29 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/20 11:33:31 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr, int *rcount)
{
	ft_printf_str("0x", rcount);
	ft_printf_hex((unsigned long)ptr, rcount, 'p');
	return (*rcount);
}
