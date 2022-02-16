/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_dun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:31:58 by ksagon            #+#    #+#             */
/*   Updated: 2022/01/26 15:50:06 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"i

int	ft_printf_dun(unsigned nbr, int *rcount)
{
	ft_putnbr_fd(nbr, 2);
	*rcount += 1;
	return (*rcount);
}
